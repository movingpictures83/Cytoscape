#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "CytoscapePlugin.h"

void CytoscapePlugin::input(std::string file) {
 inputfile = file;
 std::ifstream ifile(inputfile.c_str(), std::ios::in);
 while (!ifile.eof()) {
   std::string key, value;
   ifile >> key;
   ifile >> value;
   parameters[key] = value;
 }
}

void CytoscapePlugin::run() {}

void CytoscapePlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand += "cytoscape.sh";
myCommand += " ";
myCommand += "-N";
myCommand += " ";
myCommand += parameters["networkfile"];
myCommand += " ";
myCommand += "-s";
myCommand += " ";
myCommand += parameters["sessionfile"];
myCommand += " ";
 system(myCommand.c_str());
}

PluginProxy<CytoscapePlugin> CytoscapePluginProxy = PluginProxy<CytoscapePlugin>("Cytoscape", PluginManager::getInstance());

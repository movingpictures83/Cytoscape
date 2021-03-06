# Cytoscape
# Language: C++ (Generated by PluGen)
# Input: TXT (contains network to visualize and properties file to use)
# Output: none (Cytoscape visualizes network)
# Tested with: PluMA 1.1, gcc 4.8.4, Cytoscape 3.2.1
# Dependency: Cytoscape (http://www.cytoscape.org)

PluMA plugin that will run Cytoscape, assuming it has been installed and is in
the system PATH.

Input file is in simple TXT format and will contain tab-delimited
keyword-value pairs: one representing the network to visualize (keyword networkfile)
and the other the Cytoscape session file (.cys) to use (keyword sessionfile).
The enclosed example has:

networkfile corrP.gml
sessionfile default.cys

which will visualize the network representing in corrP.gml using properties
specified in default.cys.

There is no output, since once Cytoscape is launched and the network will be visualized
control transfers over to the user.  This plugin will likely be a later if not the last
stage of a pipeline.


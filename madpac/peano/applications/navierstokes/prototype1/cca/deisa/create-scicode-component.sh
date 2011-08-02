# Create all the C++ stuff
#java -jar /import/home_local/atanasoa/workspace_new/Peano-Tools/scicode-compiler.jar --naming de.tum.scicode.sidl.naming.Peano -L xml-cxx -I /home_local/atanasoa/workspace_new/PeanoCCA/peano/integration/cca/tarch.ports.sidl -I /home_local/atanasoa/workspace_new/PeanoCCA/peano/integration/dataqueries/de.tum.queries.QueryServer.sidl  -o /home_local/atanasoa/workspace_new/PeanoCCA   peanosolver.sidl -l libPeanoCCA.so
java -jar /import/home_local/atanasoa/workspace_new/Peano-Tools/scicode-compiler.jar --naming de.tum.scicode.sidl.plugins.Peano -L c++-ports -I /home_local/atanasoa/workspace_new/PeanoCCA/peano/integration/cca/standard-ports.sidl -I /home_local/atanasoa/workspace_new/PeanoCCA/peano/integration/dataqueries/de.tum.queries.QueryServer.sidl  -o /home_local/atanasoa/workspace_new/PeanoCCA  peanosolver.sidl
java -jar /import/home_local/atanasoa/workspace_new/Peano-Tools/scicode-compiler.jar --naming de.tum.scicode.sidl.plugins.Peano -L c++-proxy -I /home_local/atanasoa/workspace_new/PeanoCCA/peano/integration/cca/standard-ports.sidl -I /home_local/atanasoa/workspace_new/PeanoCCA/peano/integration/dataqueries/de.tum.queries.QueryServer.sidl -o /home_local/atanasoa/workspace_new/PeanoCCA  peanosolver.sidl
java -jar /import/home_local/atanasoa/workspace_new/Peano-Tools/scicode-compiler.jar --naming de.tum.scicode.sidl.plugins.Peano -L c++-plain -I /home_local/atanasoa/workspace_new/PeanoCCA/peano/integration/cca/standard-ports.sidl -I /home_local/atanasoa/workspace_new/PeanoCCA/peano/integration/dataqueries/de.tum.queries.QueryServer.sidl -o /home_local/atanasoa/workspace_new/PeanoCCA  peanosolver.sidl



# This is a bash file that creates puregridexample.scicode-component
#rm puregridexample.scicode-component
#cp /home_local/atanasoa/workspace_new/PeanoCCA/Debug/libPeanoCCA.so .
#cp /home_local/atanasoa/workspace_new/PeanoCCA/peano/applications/navierstokes/prototype1/cca/deisa/description.xml .
#zip -v peanoCCA.scicode-component libPeanoCCA.so description.xml /home_local/atanasoa/workspace_new/PeanoCCA/peano/integration/cca/tarch.ports.sidl peanosolver.sidl /PeanoCCA/peano/integration/dataqueries/de.tum.queries.QueryServer.sidl
#rm libPeanoCCA.so
#rm description.xml

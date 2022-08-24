echo "Building GLFW Application..."
g++ -c -I. test/main.cpp -Wno-deprecated-declarations
echo "Compilation complete, proceeding to linking..."
g++ -o app main.o -L. -framework GLUT -framework OpenGL -framework Cocoa
echo "Linking complete, running application..."
./app
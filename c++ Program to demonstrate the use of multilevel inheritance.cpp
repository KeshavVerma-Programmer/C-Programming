#include <iostream>
using namespace std;

// Base class
class Shape {
   protected:
      int width;
      int height;

   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
};

// Derived class from Shape
class Rectangle: public Shape {
   public:
      int getArea() {
         return (width * height);
      }
};

// Derived class from Rectangle
class Cuboid: public Rectangle {
   protected:
      int depth;

   public:
      void setDepth(int d) {
         depth = d;
      }
      int getVolume() {
         return (width * height * depth);
      }
};

int main() {
   Cuboid C;

   C.setWidth(5);
   C.setHeight(7);
   C.setDepth(9);

   // Print the area and volume of the object.
   cout << "Total area: " << C.getArea() << endl;
   cout << "Total volume: " << C.getVolume() << endl;

   return 0;
}


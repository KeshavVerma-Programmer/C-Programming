#include <iostream>
using namespace std;

// First base class
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

// Second base class
class Color {
   protected:
      string color;

   public:
      void setColor(string c) {
         color = c;
      }
};

// Derived class
class Rectangle: public Shape, public Color {
   public:
      int getArea() {
         return (width * height);
      }
      string getColor() {
         return color;
      }
};

int main() {
   Rectangle Rect;

   Rect.setWidth(5);
   Rect.setHeight(7);
   Rect.setColor("red");

   // Print the area and color of the object.
   cout << "Total area: " << Rect.getArea() << endl;
   cout << "Color: " << Rect.getColor() << endl;

   return 0;
}


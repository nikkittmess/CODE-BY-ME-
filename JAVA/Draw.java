// Define the Drawable interface
interface Drawable {
    int RED = 1;
    int GREEN = 2;
    int BLUE = 3;
    int BLACK = 4;
    int WHITE = 5;

    void draw(int color);
}

// Implement the Circle class
class Circle implements Drawable {
    private double x, y, radius;

    public Circle(double x, double y, double radius) {
        this.x = x;
        this.y = y;
        this.radius = radius;
    }

    @Override
    public void draw(int color) {
        System.out.println("Circle drawn at (" + x + ", " + y + "), with radius " + radius + ", and color " + color);
    }
}

// Implement the Rectangle class
class Rectangle implements Drawable {
    private double x1, y1, x2, y2;

    public Rectangle(double x1, double y1, double x2, double y2) {
        this.x1 = x1;
        this.y1 = y1;
        this.x2 = x2;
        this.y2 = y2;
    }

    @Override
    public void draw(int color) {
        System.out.println("Rectangle drawn with upper-left corner at (" + x1 + ", " + y1 + ") and lower-right corner at (" + x2 + ", " + y2 + "), and color " + color);
    }
}

// Define the Draw test class
public class Draw {
    public static void main(String[] args) {
        Drawable[] drawables = new Drawable[] {
            new Circle(10, 20, 15),
            new Circle(30, 20, 10),
            new Rectangle(5, 8, 8, 9)
        };

        for (int i = 0; i < drawables.length; i++) {
            drawables[i].draw(Drawable.RED);
        }
    }
}

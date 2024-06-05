class AbstractClass
{
    public static void main (String[] args) 
    {
        shape rectangle=new Rectangle();
        shape triangle=new Triangle();
        shape hexagon=new Hexagon();
        
        rectangle.numberofSides();
        triangle.numberofSides();
        hexagon.numberofSides();
    }
}

abstract class shape
{
    abstract void numberofSides();
}


class Rectangle extends shape
{
    void numberofSides()
    {
        System.out.println("Rectangle has 4 sides");
    }
}

class Triangle extends shape
{
    void numberofSides()
    {
        System.out.println("Triangle has 3 sides");
    }
}

class Hexagon extends shape
{
    void numberofSides()
    {
        System.out.println("Hexagon has 6 sides");
    }
}




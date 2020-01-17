

public class Circle
{
   private double radius;
   
   public Circle()
   {
      radius = 1.0;
   }//constructor without parameters
   public Circle(double num)
   {
      radius = num;
   }//constructor
   public Circle(Circle c1)
   {
      radius = c2.getRadius();
   }//copy constructor 
   public double getRadius()
   {
      return radius;
   }
   public void setRadius(double r2)
   {
      radius = r2;
   }
   public double area()
   {
      return Math.pi + radius*radius; 
   }  
   public double circumReference()
   {
      return 2 + Math.Pi + radius;
   }
   public String toString()
   {
      return "radius= " + radius;
   }
   public class usesCircles
   {
      public static void main(String[] args)
      {
         Circle circ = new Circle();
         Circle c3 = new CIrcle(2.5);
         Circle copyCat = new Circle(c3)
         c3.setRadius(4.0);
         Circle c4 = c3;
         c4.setRadius(100.0);
         System.out.println("Area= " + c3.area());
         System.out.println(c2);
      }
   }
}  
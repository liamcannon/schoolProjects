//lcannon

public class Point
{
   //instance data or fields
   private double xCoord;
   private double yCoord;
   //constructor
   //no args (default constructor) always public no return type
   public Point()
   {
      xCoord = 0;
      yCoord = 0;
   }
   // user defined
   public Point(double xCoord, double yVal)
   {
      this.yCoord = xCoord;
      yCoord = yVal;
   }
   public Point(Point p1)
   {
      xCoord = p1.getX();
      //xCoord = p1.xCoord;
      yCoord = p1.getY();
   }
   public String toString()
   {
      return "(" + xCoord + ", " + yCoord + ")";
      
   }
   public double getX()
   {
      return xCoord;
   }
   public void setX(double newX)
   {
      xCoord = newX;
   }
   public double getY()
   {
      return yCoord;
   }  
   public void setY(double newY)
   {
      yCoord = newY;
   }
   public Point midpoint(Point second)
   {
      double x = (xCoord + second.getX())/2;
      //double x = (this.xCoord + second.getX())/2;
      //double x = (this.xCoord + second.xCoord())/2;
      double y = (yCoord + second.getY())/2;
      Point result = new Point(x,y);
      return result;
      //return new Point(x,y); 
   }
   public double distance(Point second)
   {
     double d = Math.sqrt(Math.pow(xCoord - getX(),2)+Math.pow(yCoord - getY(),2)); 
     
     return d;
   }
   
}
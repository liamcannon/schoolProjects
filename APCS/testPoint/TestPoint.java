//lcannon

public class TestPoint
{
   public static void main(String[] args)
   {
      Point p1 = new Point();
      System.out.println(p1);
      p1.setX(3.0);
      //goes to the point class and changes the val to that
      System.out.println(p1);
   
      Point pointSecond = new Point(3.2,4.6);
      double dist = pointSecond.distance(p1);
      //Distance between p1 and pointSecond
    
      //double dist = pt.distance(pointSecond); just another way to do it
      Point middle = p1.midpoint(pointSecond);
      Point p4 = pointSecond;
      p4.setX(5.0); 
      //this also changes pointSecond
      //Point p4 = new Point(pointSecond); this is how you would do it if you don't want them to be tied together
   }
}  
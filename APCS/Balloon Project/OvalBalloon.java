import java.awt.Graphics;
import java.awt.Color;

public class OvalBalloon extends Balloon
{
   public OvalBalloon()
   {
   
   }
   
   public OvalBalloon(int x, int y, int r, Color c)
   {
      super(x, y, r, c);
   }
   
    public double distance(int x, int y)
  {
    double dx = x - getX();
    double dy = y - getY();
    
    double d = Math.sqrt(4*dx*dx + dy*dy);
    
    return d;
  }
   public void draw(Graphics g, boolean makeItFilled)
   {
      g.setColor(getColor());
     int r = getRadius();
     int x = getX();
     int y = getY();
     
     if(makeItFilled)
      g.fillOval(x-r, y-r, r, 2*r);
     else 
      g.drawOval(x-r, y-r, r, 2*r);

   }
   
}//end of class
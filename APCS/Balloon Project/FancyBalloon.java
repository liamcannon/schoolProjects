import java.awt.Graphics;
import java.awt.Color;

public class FancyBalloon extends Balloon
{
   public FancyBalloon()
   {
   
   }
   
   public FancyBalloon(int x, int y, int r, Color c)
   {
      super(x, y, r, c);
   }
   
   public double distance(int x, int y)
   {
      double dx = x - getX();
      double dy = y - getY();
      
      return Math.min(Math.sqrt(4*dx*dx + dy*dy), Math.sqrt(dx*dx + 4*dy*dy));
   }
   
   public void draw(Graphics g, boolean makeItFilled)
   {
      int x = getX();
      int y = getY();
      int r = getRadius();
      Color c = getColor();
      
      if(makeItFilled)
      {
         g.setColor(c);
         g.fillOval(x-r/2, y-r, r, 2*r);
         g.setColor(new Color(c.getRed(), c.getGreen(), c.getBlue(), c.getAlpha()/2));
         g.fillOval(x-r, y-r/2, 2*r, r);
      }
      else
      {
         g.setColor(c);
         g.drawOval(x-r/2, y-r, r, 2*r);
         g.drawOval(x-r, y-r/2, 2*r, r);
      }
   }
   
}//end of class
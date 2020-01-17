
import java.awt.Color;
import java.awt.Graphics;

public class RoundBalloon extends Balloon
{
  public RoundBalloon()
  {  
    super();
  }
  
  public RoundBalloon(int x, int y, int r, Color c)
  {
    super(x, y, r, c);
  }
  
  public void draw(Graphics g, boolean makeItFilled)
  {
     g.setColor(getColor());
     int r = getRadius();
     int x = getX();
     int y = getY();
     
     if(makeItFilled)
      g.fillOval(x-r, y-r, 2*r, 2*r);
     else 
      g.drawOval(x-r, y-r, 2*r, 2*r);
     
    
  } 
}//end of class
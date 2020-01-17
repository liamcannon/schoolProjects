/* lcannon
   calculations 
   calculate the volume and surface area of a cone
   9/10/18
*/
import java.util.Scanner; 

public class conecalc
{
   public static void main(String[] args)
   {
      Scanner reader = new Scanner(System.in);
      System.out.println("Enter the radius: ");
      // dimensions
      double radius = reader.nextInt();
      System.out.println("Enter the Height: ");
      double height = reader.nextInt();
      
      // 1/3*PI*r
      double volume = (double)1/3*Math.PI*height*radius*radius; //Math.pow(radius, 2)
      System.out.println("Volume = " + volume);
      
      double slant = Math.sqrt(height*height + radius*radius);
      System.out.println("Slant = " + slant);
      
      double surface = Math.PI*radius*radius + Math.PI*radius*slant;
      System.out.println("Surface = " + surface);
   }

}
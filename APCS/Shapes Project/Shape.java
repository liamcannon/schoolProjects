//lcannon

public class Shape
{
   private int side;
   private int numSide;
   
   public Shape()
   {
      side = 1;
      numSides = 3;
   }
   
   public Shape(int length, int numberOfSides)
   {
      side = length
      numSides = numberOfSides;
   }
   
   public Shape(Shape copy)
   {
      side = copy.side;
      numSides = copy.numSides;
   }
}//end of class
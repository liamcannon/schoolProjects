// lcannon


public class dieThing
{
   public static void main(String[] args)
   {
   int count7 = 0;
      for(int count = 0; count<= 100; count++)
      {
      int dieOne = 1 + (int)(6 *Math.random());
      
      int dieTwo = 1 + (int)(6 *Math.random());
      
      int total = dieOne+dieTwo;
         if(total == 7)
         {
         count7++;
         System.out.println("Amount of 7's = " + count7);
         }
      }
   }
}
//lcannon
 
public class RandomArray
{
   public static void main(String[] args)
   {
      int[] numList = new int[100];
      
      for(int x = 0; x<numList.length; x++)
         numList[x] = (int)(Math.random()*10) + 1;
      
      for(int x = 0; x<numList.length; x++)
      
         System.out.println(numList[x]);
      
   }
}

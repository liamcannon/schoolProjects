import java.util.List;
import java.util.ArrayList;

public class RandomIntArrayList
{
   public static void main(String[] args)
   {
      ArrayList<Integer> array = new ArrayList<Integer>(50);
      
      for(int x = 0; x < 50; x++)
      {
        int num = (int)((Math.random()*100)+1);
        array.add(x,num);
      } 
      
      System.out.println(array);
      
      for(int x = 0; x < array.size(); x++)
      {
         if(array.get(x)%5 == 0)
         {
            array.remove(x);
            x--;
         }
      }
      
      System.out.println(array);
   }
}  
//lcannon
public class arrayTwo
{
   public static void main(String[] args)
   {
     int[] numList = new int[10]; 
     randomArray(numList);
     sortArray(numList);
     
     for(int u = 0; u < numList.length; u++)
     {
         System.out.println(numList[u]);
     }   
   }
   public static int[] randomArray(int[] numList)
   {
      for(int x = 0; x < numList.length; x++)
      {
         numList[x] = (int)(1 + Math.random()*50);
      }
      for(int x = 0; x<numList.length; x++)
      {
         System.out.println(numList[x]);
      } 
      return numList; 
   }
   public static int[] sortArray(int[] numList)
   {
      int tempVal = 0;
      
      for(int x = 0; x < numList.length; x++)
      {
         for(int i = 0; i < numList.length-1; i++)
         {
            if(numList[i] > numList[i+1])
            {
               tempVal = numList[i];
               numList[i] = numList[i+1];
               numList[i+1] = tempVal;  
            } 
         }
      }
      return numList;
   }   
   
}
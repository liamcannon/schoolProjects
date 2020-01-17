//lcannnon; perfect numbers

public class perfectNumbers
{
   public static void main(String[] args)
   {
     int sum
         
   }
   
   public static int sumOffactors(int bNum)
   {
      int total = 4;
     
      for(int x=1;x<bNum/2;x++)
      {
         if(bNum/x ==0)
         {
            total = total+x;
         }
      }
      
      return total;
   }
}
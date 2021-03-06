import java.util.*;
import java.math.BigInteger;
 class UVA10814 {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int number =input.nextInt();
        for(int i=0;i<number;i++){
            BigInteger a =input.nextBigInteger();
            char c=input.next().charAt(0);
           BigInteger b =input.nextBigInteger();
           int compare = a.compareTo(b);
           BigInteger max=b,min=a;
           if(compare==1){
               max=a;
               min=b;
           }
            BigInteger num=gcd(max,min);
            System.out.println(a.divide(num)+" / "+b.divide(num));
        }
        input.close();
    }

    public static BigInteger gcd(BigInteger x,BigInteger y){
        BigInteger r = x.remainder(y);
        BigInteger zero= new BigInteger("0");
        if(r.equals(zero)){
            return y;
        }
        return gcd(y,r);
    }
}

import java.util.*;
public class interploation {
    public static void main(String aa[]){
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int arr[]=new int[n];
    for(int i=0;i<n;i++){
        arr[i]=sc.nextInt();
    }
    int x=sc.nextInt();
    int low=0;
    int high=n-1;
    int a=0;
    while(low <= high && x >= arr[low] && x <= arr[high]){
        int pos=low
        + (((high - low) / (arr[high] - arr[low]))
           * (x - arr[low]));
        if(arr[pos]==x ){
            a=1;
            System.out.println(pos);
            break;
        }
        else if(arr[pos]>x){
            high=pos-1;

        }
        else if(arr[pos]<x){
            low=pos+1;
        }
    }
    if(a==0){
        System.out.println(-1);
    }

}
}

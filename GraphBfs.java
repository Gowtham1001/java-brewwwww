import java.util.*;




class GraphBfs{

    public static void main(String args[]){
       Scanner sc=new Scanner(System.in);
    
       int n=sc.nextInt();
        int m=sc.nextInt();
        sc.nextLine();
        String s=sc.nextLine();
        
       int arr[][]=new int[n][n];

        for(int i=0;i<m;i++){

            int a=sc.nextInt();
            int b=sc.nextInt();

            arr[a-1][b-1]=sc.nextInt();

            if(s.equals("no")){
                arr[b-1][a-1]=arr[a-1][b-1];
            }

        }
        boolean a[]=new boolean[n];
        Queue<Integer> q=new LinkedList<>();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               if(arr[i][j]>=1 && !a[i] && !a[j]){
                a[i]=true;
                a[j]=true;
                q.add(i);
                q.add(j);
               }
               if(q.peek()!=null && q.peek()==i){
                    System.out.println(q.poll());
                    i=j;
                    j=0;
               }

            }
        }
    
    
    }
}
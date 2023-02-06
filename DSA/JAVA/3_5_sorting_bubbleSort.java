package sample1;
public class bubbleSort{
public static void main(String[] args){
int [] arr = {2,8,3,4,56};
//System.out.println(arr);
for(int i=0;i<arr.length;i++) {
	System.out.print(arr[i]+" ");
}
int temp=arr[0];
for(int i=0;i<arr.length-2;i++){
for(int j=0;j<arr.length-2-i;j++){
if(arr[j]>arr[j+1]){
temp=arr[j+1];
arr[j+1]=arr[j];
arr[j]=temp;
}
}}
System.out.println("");
System.out.println("After bubble sort: ");
for(int i=0;i<arr.length;i++) {
	System.out.print(arr[i]+" ");
}
}
}

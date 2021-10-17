class Solution {
    public int beautySum(String str) {
    List<String> t=new ArrayList<>();

         for (int i = 0; i < str.length(); i++) {
   for (int j = i+3; j <= str.length(); j++) {
        t.add(str.substring(i,j));}}
       // System.out.println(t);
        int z=0;
             for(int i=0;i<t.size();i++)
             {int sum=0;
                 int[] f=new int[26];
                 String o=t.get(i);
                 for(int j=0;j<o.length();j++)
                 {
                     char c=o.charAt(j);
                     f[c-'a']++;
                 }
                
                int max=f[0];
                 int min=Integer.MAX_VALUE;
                 
                 for(int k=0;k<26;k++)
                 { //System.out.print(f[k]);
                
                    if(f[k]!=0){
                    if(f[k]>max)
                     max=f[k];
                     if(f[k]<min)
                     min=f[k];}
                 }
                 if(min!=Integer.MAX_VALUE)
                 sum=(max-min);  
                 //System.out.println(sum);
                  // sum=sum+(max-min);  
                 z=z+sum;
             }
        return z;
    }    
}

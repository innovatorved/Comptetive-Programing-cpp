import java.util.*;
public class main {

 public static void main(String[] args) {
  Scanner sc=new Scanner(System.in);
     String teams[]={"MI","CSK","RCB","RR","SRH","DC","PBKS","KKR"};
     Map<String,Integer> points=new HashMap<>();
     Map<String,Double> nrr=new HashMap<>();
     for(int i=0;i<8;i++)
     {
       points.put(teams[i],0);
       nrr.put(teams[i],0.0);
     }
     int x=56;
     while(x-->0)
     {
       String s[]=sc.nextLine().split(" ");
       int index1=s[1].indexOf("/");
       int index2=s[4].indexOf("/");
       int balls1=Integer.parseInt(s[2]);
       int balls2=Integer.parseInt(s[5]);
       int score1=Integer.parseInt(s[1].substring(0,index1));
       int score2=Integer.parseInt(s[4].substring(0,index2));
       int flag=0,win=0;
       if(score1==score2)
       {
         points.put(s[0],points.get(s[0])+1);
         points.put(s[3],points.get(s[3])+1);
         flag=1;
       }
       else if(score1>score2)
       {
         points.put(s[0],points.get(s[0])+2);
         win=0;
       }
       else
       {
         points.put(s[3],points.get(s[3])+2);
         win=1;
       }
       if(flag==0)
       {
        if(win==0)
        {
          int dif=score1-score2;
          double rr=dif*0.05;
          nrr.put(s[0],nrr.get(s[0])+rr);
          nrr.put(s[3],nrr.get(s[3])-rr);
        }
         else
         {
           int pr=score2*120/balls2;
           double rr=(pr-score1)*0.05;
           nrr.put(s[3],nrr.get(s[3])+rr);
           nrr.put(s[0],nrr.get(s[0])-rr);
         }
       }
   }
     points=sort(points);
     int p[]=new int[8];
     String st[]=new String[8];
     int i=0;
     for(Map.Entry<String,Integer> set: points.entrySet()) {
      p[i]=set.getValue();
      st[i]=set.getKey();
      i++;
     }
      TreeMap<Double,String> srt=new TreeMap<>(Collections.reverseOrder());
      for( i=7;i>0;i--)
      {
        if(p[i]==p[i-1])
        {srt.put(nrr.get(st[i]),st[i]);
        }
         else
        {
          if(srt.size()==0) System.out.println(st[i]);
          else
          {
            srt.put(nrr.get(st[i]),st[i]);
            for(Map.Entry<Double,String> nk:srt.entrySet())
            {
              System.out.println(nk.getValue());
            }
            srt.clear();
          }
        }
      }
        if(i==0) System.out.print(st[0]);
        else if(srt.size()!=0)
        {
          for(Map.Entry<Double,String> nk:srt.entrySet())
            {
              System.out.println(nk.getValue());
            }
        }
 }

 public static HashMap<String, Integer> sort(Map<String, Integer> hm)
    {
        List<Map.Entry<String, Integer> > list =
               new LinkedList<Map.Entry<String, Integer> >(hm.entrySet());
  Collections.sort(list, new Comparator<Map.Entry<String, Integer> >() {
            public int compare(Map.Entry<String, Integer> mp1,
                               Map.Entry<String, Integer> mp2)
            {
                return (mp1.getValue()).compareTo(mp2.getValue());
            }
        });
         HashMap<String, Integer> temp = new LinkedHashMap<String, Integer>();
        for (Map.Entry<String, Integer> mpp : list) {
            temp.put(mpp.getKey(), mpp.getValue());
        }
        return temp;
    }
}
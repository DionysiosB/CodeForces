import java.io.*;
import java.util.InputMismatchException;
public final class solution
{
	public static void main(String arg[])
	{
            InputReader in=new InputReader(System.in);
            OutputWriter out=new OutputWriter(System.out);
            int n=in.readInt();
            int arr[]=new int[n];
            for(int i=0;i<n;++i)
                arr[i]=in.readInt();
            
            int max=100000;
            
            int steps[]=new int[max+1];
            int canBeReached[]=new int[max+1];
            
            for(int i=0;i<n;++i)
            {
                int temp=arr[i]*2,cnt=1;
                while(temp <= max)
                {
                    canBeReached[temp]++;
                    steps[temp]+=cnt;
                    temp=temp*2;
                    cnt++;
                }
                temp=arr[i];
                                
                cnt=0;
                while(temp>0)
                {
                    canBeReached[temp]++;
                    steps[temp]+=cnt;
                    if(temp%2==1)
                    {
                        int kaka=temp/2;
                        int temp_cnt=cnt+1;
                        kaka=kaka*2;
                        ++temp_cnt;
                        while(kaka<=max && kaka>0)
                        {
                            canBeReached[kaka]++;
                            steps[kaka]+=temp_cnt;
                            kaka=kaka*2;
                            ++temp_cnt;
                        }
                    }                    
                    temp=temp/2;
                    ++cnt;
                }                
            }
            int ans=1000000000;
            for(int i=0;i<=max;++i)
            {
                if(canBeReached[i]==n)
                {
                    ans=Math.min(ans,steps[i]);
                }
            }  
            
            out.printLine(ans);          
            
            out.flush();
            out.close();		
	}
}
interface FastInputIO
{
    public int read();
    public int readInt();
    public String readString();
    public double readDouble();
    public long readLong();
    public boolean isSpaceChar(int c);
    public String next();
    
}
interface FastOutputIO
{
    public void print(Object... objects);
    public void printLine(Object... objects);
    public void close();
    public void flush();
    
}
    class InputReader implements FastInputIO
    {
        private InputStream stream;
        private byte[] buf = new byte[1024];
        private int curChar;
        private int numChars;
        private SpaceCharFilter filter;
           
        public InputReader(InputStream stream)
        {
            this.stream = stream;
        }
 
        public int read()
        {
            if (numChars == -1)
                throw new InputMismatchException();
            if (curChar >= numChars)
            {
                curChar = 0;
                try
                {
                    numChars = stream.read(buf);
                } catch (IOException e)
                {
                    throw new InputMismatchException();
                }
                if (numChars <= 0)
                    return -1;
            }
            return buf[curChar++];
        }
 
        public int readInt()
        {
            int c = read();
            while (isSpaceChar(c))
                c = read();
            int sgn = 1;
            if (c == '-')
            {
                sgn = -1;
                c = read();
            }
            int res = 0;
            do
            {
                if (c < '0' || c > '9')
                    throw new InputMismatchException();
                res *= 10;
                res += c - '0';
                c = read();
            } while (!isSpaceChar(c));
            return res * sgn;
        }
 
        public String readString()
        {
            int c = read();
            while (isSpaceChar(c))
                c = read();
            StringBuilder res = new StringBuilder();
            do
            {
                res.appendCodePoint(c);
                c = read();
            } while (!isSpaceChar(c));
            return res.toString();
        }
        public double readDouble() {
            int c = read();
            while (isSpaceChar(c))
                c = read();
            int sgn = 1;
            if (c == '-') {
                sgn = -1;
                c = read();
            }
            double res = 0;
            while (!isSpaceChar(c) && c != '.') {
                if (c == 'e' || c == 'E')
                    return res * Math.pow(10, readInt());
                if (c < '0' || c > '9')
                    throw new InputMismatchException();
                res *= 10;
                res += c - '0';
                c = read();
            }
            if (c == '.') {
                c = read();
                double m = 1;
                while (!isSpaceChar(c)) {
                    if (c == 'e' || c == 'E')
                        return res * Math.pow(10, readInt());
                    if (c < '0' || c > '9')
                        throw new InputMismatchException();
                    m /= 10;
                    res += (c - '0') * m;
                    c = read();
                }
            }
            return res * sgn;
        }
        public long readLong() {
            int c = read();
            while (isSpaceChar(c))
                c = read();
            int sgn = 1;
            if (c == '-') {
                sgn = -1;
                c = read();
            }
            long res = 0;
            do {
                if (c < '0' || c > '9')
                    throw new InputMismatchException();
                res *= 10;
                res += c - '0';
                c = read();
            } while (!isSpaceChar(c));
            return res * sgn;
        }
        public boolean isSpaceChar(int c)
        {
            if (filter != null)
                return filter.isSpaceChar(c);
            return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
        }
 
        public String next()
        {
            return readString();
        }
 
        public interface SpaceCharFilter
        {
            public boolean isSpaceChar(int ch);
        }
    }
 
    class OutputWriter implements FastOutputIO
    {
        private final PrintWriter writer;
 
        public OutputWriter(OutputStream outputStream)
        {
            writer = new PrintWriter(new BufferedWriter(new OutputStreamWriter(outputStream)));
        }
 
        public OutputWriter(Writer writer)
        {
            this.writer = new PrintWriter(writer);
        }
 
        public void print(Object... objects)
        {
            for (int i = 0; i < objects.length; i++)
            {
                if (i != 0)
                    writer.print(' ');
                writer.print(objects[i]);
            }
        }
 
        public void printLine(Object... objects)
        {
            print(objects);
            writer.println();
        }
 
        public void close()
        {
            writer.close();
        }
 
        public void flush()
        {
            writer.flush();
        } 
    }
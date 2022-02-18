class Test
{
    final static int s=10;
    public Test(int s)
    {
        this.s=s;
    }

    public static void main(String[] args)
    {
        Test test = new Test(20);
        System.out.println("S : "+s);
    }
}
public class polar
{
	boolean noSaved = true;
	double saved;

	public polar()
	{
	noSaved = true;
	}
	public double next()
	{
		if(noSaved)
		{
			double u1, u2, v1, v2, w;
			do
			{
				u1 = Math.random();
				u2 = Math.random();
				v1 = 2*u1 - 1;
				v2 = 2*u2 - 1;
				w = v1*v1 + v2*v2;
			}
			while(w > 1);
			double r = Math.sqrt((-2*Math.log(w))/w);
			saved = r*v2;
			noSaved = !noSaved;
			return r*v1;
		}
		else
		{
			noSaved = !noSaved;
			return saved;
		}
	}
	public static void main(String[] args)
	{
		polar g = new polar();
		for(int i=0; i<10; ++i)
		{
		System.out.println(g.next());
		}
	}
}

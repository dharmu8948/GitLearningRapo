class Voter
{
	private int age;
	String name;
	public void setAge(int age)
	{
		if(age<18  ||  age>120)
		{
			throw new IllegalArgumentException("You are not elligible for Voting)");
		}
		this.age=age;
	}
	public int getAge()
	{
		return age;
	}
	public void setName(String name)
	{
		this.name=name;
	}
	public String getName()
	{
		return name;
	}
}
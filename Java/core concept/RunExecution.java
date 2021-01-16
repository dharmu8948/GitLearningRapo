class MyRunnable implements Runnable
{
	public void run()
	{
		System.out.println("From MyRunnable.run()");
	}
}
class MyThread extends Thread
{
	MyThread()
	{
		super();
	}
	MyThread(Runnable target)
	{
		super(target);
	}
	public void run()
	{
		System.out.println("From MyThread.run()");
	}
}
class RunExecution
{
	public static void main(String[] args)
	{
		//case 1:
	/*	Thread th1 = new Thread();
		th1.start();                           //o/p:  "No output" b'z Thread class run() has Empty implementation 
		
		//case 2:
		MyThread mt1 = new MyThread();
		mt1.start();                         //O/p:  "From MyThread.run()" executed by MyThread class
		
		//case 3:
        MyRunnable mr1 = new MyRunnable();
	//	mr1.start();                        // O/p: "CE:Cannot find symbol" B'z in MyRunnable class or its Parent class---
		                                    // has not implementation of start() :
		
		
		//case 4:
		Thread th2 = new Thread(mr1);
		th2.start();                    //O/p:"from MyRunnable.run()" B'z mr1 is passed as argument so in Thread class --
		                                //-argument type method executed i,e MyThread(Runnable target) method executed
										//which is implement in Myrunnable class
		
		//case 5:
		MyThread mt2 = new MyThread();
		Thread th3 = new Thread(mt2);
		th3.start();                   //O/p: "From MyThread.run()" B'z thread is passed MyThread as argument
		
		//case 6:
		Thread th4 = new MyThread();
		th4.start();                  //O/p: "From Thread.run()" 
		System.out.println();								   
		
		//case :7;
	//	Thread th5 = new MyRunnable();
	//	th5.start();                       //CE: cannot find Symbol B'z MyRunnable cannot be converted to Thread
		
		*/
		//case 8;
		Runnable r = new MyRunnable();
	//	r.start();                        //O/p cannot find symbol B'z start() is not define in MyRunnable or its super class
	                                       // i,r Runnable interface

										   
	    //case 9:
		Thread th6 = new Thread(r);
		th6.start();          
		
		// case 10:
		Runnable r1 = new MyThread();
	//	r.start();                      //CE:cannot find symbol
		
		
		//case 11:
		Thread th7 = new Thread(r1);
        th7.start();	              //"From MyThread.run()"	
		
		
		//case 12:
		MyRunnable mr2 = new MyRunnable();
		MyThread mt3 = new MyThread(mr2);
		mt3.start();                       //"From MyThread.run()"
		
		
		//case 13:
		MyThread mt4 = new MyThread();
		MyThread mt5 = new MyThread(mt4);
		mt5.start();                       //"From MyThread.run()"     
		
		
		
	}
}
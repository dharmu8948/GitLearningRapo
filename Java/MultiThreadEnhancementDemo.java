/*
class ThreadGrouDemo1
{
public static void main(String[] args)
{
System.out.println(Thread.currentThread().getThreadGroup().getName());  //main
System.out.println(Thread.currentThread().getThreadGroup().getParent().getName()); //system
}
}
========================================================================================================
class ThreadGroupDemo2
{
	public static void main(String[] args)
	{
		ThreadGroup g1 = new ThreadGroup("First Class");
		System.out.println(g1.getParent().getName());    //main
		ThreadGroup g2 = new ThreadGroup(g1,"Second Class");
		System.out.println(g2.getParent().getName());  //first Class
	}
}
=================================================================================================================
class ThreadGroupDemo3
{
	public static void main(String[] args)
	{
		ThreadGroup g1 = new ThreadGroup("tg");
		Thread t1=new Thread(g1,"Thread1");
		Thread t2=new Thread(g1,"Thread2");
		g1.setMaxPriority(3);
		Thread t3=new Thread(g1,"Thread");
		System.out.println(t1.getPriority());   //5
		System.out.println(t2.getPriority());   //5
		System.out.println(t3.getPriority());   //3
	}
}
=================================================================================================================
class MyThread extends Thread
{
	MyThread(ThreadGroup g,String name)
	{
		super(g,name);
	}
	public void run()
	{
		System.out.println("Child Thread");
		try
		{
			Thread.sleep(5000);
		}
		catch(InterruptedException e)
		{
		}
	}
}
class ThreadGroupDemo4
{
	public static void main(String[] args)throws Exception
	{
		ThreadGroup pg =new ThreadGroup("Parent Thread");
		ThreadGroup cg =new ThreadGroup(pg,"Child Thread");
		MyThread t1 = new MyThread(pg,"Child Thread");
		MyThread t2 = new MyThread(pg,"Child Thread");
		t1.start();
		t2.start();
		System.out.println(pg.activeCount());   // 2
		System.out.println(pg.activeGroupCount());  //1
		pg.list();
		Thread.sleep(10000);
		System.out.println(pg.activeCount());   // 0
		System.out.println(pg.activeGroupCount());  //1
	}
}
==================================================================================================================
class ThreadGroupDemo5
{
	public static void main(String[] args)
	{
		ThreadGroup system=Thread.currentThread().getThreadGroup().getParent();
		Thread[] t = new Thread[system.activeCount()];
		system.enumerate(t);
		for(Thread t1:t)
		{
			System.out.println(t1.getName()+"................."+t1.isDaemon());
		}
	}
}
=================================================================================================================================*/

import java.util.concurrent.locks.*;
class ReenterantLock
{
	public static void main(String[] args)
	{
		ReenterantLock l = new ReenterantLock();
		l.Lock();
		l.Lock();
		System.out.println(l.isLocked());   //true
		System.out.println(l.isHeldByCurrentThread());   //true
		System.out.println(l.getQueueLength());          //  0
		l.unlock();
		System.out.println(l.getHoldCount());    //1
		System.out.println(l.isLocked());        //true
		l.unlock();
		System.out.println(l.isLocked());   //false
		System.out.println(l.isFair());     //false
	}
}
		
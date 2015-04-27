package com.yifabao.hibernate;

public class Product{
	private String id;
	private String name;
	private double price;

	public String getId()
	{
		return this.id;	
	}
	public String getName()
	{
		return this.name;	
	}

	public double getPrice()
	{
		return this.price;	
	}

	public void setId(String id){
		this.id=id;	
	}

	public void setName(String name){
		this.name=name;	
	}

	public void setPrice(double price){
		this.price=price;	
	}
}

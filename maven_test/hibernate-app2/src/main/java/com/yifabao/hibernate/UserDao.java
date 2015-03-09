package com.yifabao.hibernate;

public interface UserDao{

	/**
	 *更新User
	 **/
	public void updateUser(User user);
	/**
	 *保存User
	 **/
	public saveUser(User user);

	/**
	 * 根据id 获取User
	 **/
	public User getById(int id);

	/**
	 *查询出所有的User 
	 **/
	public List<User> findAll();

	/**
	 * 分页
	 **/
	public List<User> findAll(int firstResult,int maxResult);
}

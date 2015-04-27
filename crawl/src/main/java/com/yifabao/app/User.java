package com.yifabao.app;

public class User{
    private int id;
    private String username;
    private String password;

    public User(){}

    public User(String username,String password){
        this.username = username;
        this.password = password;
    }

    public void setId(int id)
    {
        this.id = id; 
    }
    public int getId()
    {
        return this.id; 
    }

    public void setUsername(String username)
    {
        this.username = username; 
    }
    public String getUsername()
    {
        return this.username; 
    }
    
    public void setPassword(String password)
    {
        this.password = password; 
    }
    public String getPassword(){
        return this.password; 
    }
}

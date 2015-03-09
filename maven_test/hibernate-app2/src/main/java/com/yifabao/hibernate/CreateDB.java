package com.yifabao.hibernate;

import org.hibernate.cfg.Configuration;
import org.hibernate.tool.hbm2ddl.SchemaExport;

public class CreateDB{
	public void createDb() 
	{
		Configuration cfg = new Configuration().configure();
		SchemaExport sExport = new SchemaExport(cfg);
		sExport.create(true,true);
	}
}

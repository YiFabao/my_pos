package com.yifabao.app;

import java.net.URL;
import java.io.InputStream;

public class TestHttpClient{
	public static void main(String args[])
	{
		String path = "";
		URL pageURL = new URL(path);	
		InputStream stream = pageURL.openStream();
	}
}

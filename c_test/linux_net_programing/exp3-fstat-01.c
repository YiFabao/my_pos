#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc,char* argv[]){
	struct stat st;
	int flag = stat("test.txt",&st);
	if(flag==-1)
	{
		printf("获得文件状态失败\n");	
		exit(1);
	}

	printf("包含此文件设备ID:%d\n",st.st_dev);
	printf("此文件的节点:%d\n",st.st_ino);
	printf("此文件的保护模式:%d\n",st.st_mode);
	printf("此文件的硬链接数:%d\n",st.st_nlink);
	printf("此文件的所有者:%d\n",st.st_uid);
	printf("此文件的所有者组%d\n",st.st_gid);
	printf("设备ID(此文件为特殊设备)%d\n",st.st_rdev);
	printf("此文件的大小%d\n",st.st_size);
	printf("此文件的所在文件系统的块大小:%d\n",st.st_blksize);
	printf("此文件的占用数块数量:%d\n",st.st_blocks);
	printf("最后访问时间:%d\n",st.st_atime);
	printf("最后修改时间:%d\n",st.st_mtime);
	printf("最后状态改变时间:%d\n",st.st_ctime);
	return 0;
}

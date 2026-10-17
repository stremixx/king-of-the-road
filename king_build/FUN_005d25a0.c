
void FUN_005d25a0(undefined4 param_1)

{
  _SYSTEMTIME local_10;
  
  GetLocalTime(&local_10);
  FUN_0061c369(&DAT_0071ef88,s__02d__02d__02d__02d__02d_0067eb20,local_10.wDay,local_10.wMonth,
               local_10.wYear % 100,local_10.wHour,local_10.wMinute);
  FUN_0061c369(&DAT_0071e780,s__s___s___s_0067eb10,&DAT_0071efe0,&DAT_0071ef88,param_1);
  FUN_005d2250(&DAT_0071e780,0);
  (*(code *)PTR_FUN_0067eabc)();
                    /* WARNING: Subroutine does not return */
  __exit(0);
}


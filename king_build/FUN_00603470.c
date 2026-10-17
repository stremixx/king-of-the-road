
void FUN_00603470(LPCSTR param_1,LPCSTR param_2,undefined4 param_3,undefined4 param_4,LPCSTR param_5
                 )

{
  CHAR local_60 [96];
  
  FUN_0061c369(local_60,&DAT_00670350,param_3,param_4);
  WritePrivateProfileStringA(param_1,param_2,local_60,param_5);
  return;
}



void FUN_004e1de6(char *param_1)

{
  size_t sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char local_70 [100];
  size_t local_c;
  undefined4 local_8;
  
  local_8 = FUN_0061c356(s_warn_log_00672598,&DAT_00672594);
  local_c = _strlen(param_1);
  if (((int)local_c < 0) || (10000 < (int)local_c)) {
    FUN_0061c369(local_70,s_errlog_string_parameter_has_inco_006725a4,local_c,local_c);
    uVar2 = 1;
    uVar3 = local_8;
    sVar1 = _strlen(local_70);
    FUN_0061d9d6(local_70,sVar1,uVar2,uVar3);
    FUN_0061d9d6(param_1,0x32,1,local_8);
  }
  else {
    uVar2 = 1;
    uVar3 = local_8;
    sVar1 = _strlen(param_1);
    FUN_0061d9d6(param_1,sVar1,uVar2,uVar3);
  }
  FUN_0061c25a(local_8);
  return;
}


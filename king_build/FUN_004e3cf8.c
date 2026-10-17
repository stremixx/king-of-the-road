
void FUN_004e3cf8(undefined4 param_1)

{
  undefined1 local_20 [12];
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  switch(local_14.wMonth) {
  case 1:
    FUN_0061e950(local_20,&PTR_DAT_0067295c);
    break;
  case 2:
    FUN_0061e950(local_20,&PTR_LAB_00672960);
    break;
  case 3:
    FUN_0061e950(local_20,&PTR_DAT_00672964);
    break;
  case 4:
    FUN_0061e950(local_20,&PTR_DAT_00672968);
    break;
  case 5:
    FUN_0061e950(local_20,&DAT_0067296c);
    break;
  case 6:
    FUN_0061e950(local_20,&PTR_DAT_00672970);
    break;
  case 7:
    FUN_0061e950(local_20,&PTR_DAT_00672974);
    break;
  case 8:
    FUN_0061e950(local_20,&PTR_s__f__f____>100__00677524_0x1d_00672978);
    break;
  case 9:
    FUN_0061e950(local_20,&PTR_DAT_0067297c);
    break;
  case 10:
    FUN_0061e950(local_20,&PTR_DAT_00672980);
    break;
  case 0xb:
    FUN_0061e950(local_20,&PTR_DAT_00672984);
    break;
  case 0xc:
    FUN_0061e950(local_20,&PTR_LAB_00636542_2_00672988);
  }
  FUN_0061c369(param_1,s__02d__s__02d__02d__02d__02d_0067298c,local_14.wDay,local_20,local_14.wYear,
               local_14.wHour,local_14.wMinute,local_14.wSecond);
  return;
}


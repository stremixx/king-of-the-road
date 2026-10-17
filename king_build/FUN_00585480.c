
void __thiscall FUN_00585480(int param_1,int *param_2,undefined4 *param_3,float param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 local_1e8 [28];
  undefined4 local_1cc [12];
  int local_19c [3];
  undefined4 local_190 [52];
  float local_c0;
  undefined4 local_bc [12];
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006471bb;
  local_c = ExceptionList;
  if (param_2[0x5d] == 0) {
    ExceptionList = &local_c;
    param_2[0x313] = (int)((float)param_2[0x68] * param_4);
    param_2[0x314] = (int)((float)param_2[0x69] * param_4);
    param_2[0x315] = (int)((float)param_2[0x6a] * param_4);
    param_2[0x316] = (int)((float)param_2[0x6b] * param_4);
    param_2[0x317] = (int)((float)param_2[0x6c] * param_4);
    param_2[0x318] = (int)((float)param_2[0x6d] * param_4);
    (**(code **)(*param_2 + 0xac))(param_3,param_1,param_4);
  }
  else {
    ExceptionList = &local_c;
    FUN_006022c0();
    local_19c[0] = param_2[0x129];
    local_19c[2] = *(undefined4 *)(param_1 + 0x4a4);
    local_19c[1] = 1;
    puVar2 = local_190;
    for (iVar1 = 0x34; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
    local_c0 = param_4;
    local_4 = 0;
    FUN_0057d570(local_1cc);
    puVar2 = local_1cc;
    puVar3 = local_bc;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    local_8c = param_2[0x68];
    local_88 = param_2[0x69];
    local_80 = param_2[0x6b];
    local_7c = param_2[0x6c];
    local_84 = param_2[0x6a];
    local_78 = param_2[0x6d];
    FUN_006027f0((int)DAT_0067c04a,local_19c,0x128);
    FUN_005c2d10(local_1e8);
    local_4 = 0xffffffff;
    FUN_00602560();
  }
  ExceptionList = local_c;
  return;
}


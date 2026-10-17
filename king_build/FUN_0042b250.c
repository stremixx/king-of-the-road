
undefined4 FUN_0042b250(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  int *piVar5;
  undefined4 uVar6;
  
  iVar1 = (int)param_1;
  piVar5 = DAT_0068bb78;
  if (DAT_0068bb78 != DAT_0068bb7c) {
    do {
      if (iVar1 != *piVar5) {
        FUN_0042b140(*piVar5,0);
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != DAT_0068bb7c);
  }
  FUN_0042b140(iVar1,1);
  if (*(int *)(iVar1 + 0x38) != -1) {
    FUN_00484370();
    param_1 = (int *)*DAT_0068a8f0;
    if (param_1 != DAT_0068a8f0) {
      do {
        iVar4 = *(int *)(DAT_0068be98 + *(int *)(iVar1 + 0x38) * 4);
        iVar3 = DAT_0068be98;
        FUN_0041d3f0(&param_1);
        FUN_0040a950(iVar3);
        FUN_00405e90();
        iVar2 = FUN_00447d30();
        uVar6 = extraout_ECX;
        FUN_0041d3f0(&param_1);
        FUN_0040a950(uVar6);
        FUN_00405e90();
        for (iVar3 = FUN_004558b0(); (iVar3 != iVar2 && (*(int *)(iVar3 + 4) != iVar4));
            iVar3 = iVar3 + 0xc) {
        }
        iVar4 = FUN_0040a950(param_1);
        iVar4 = *(int *)(iVar4 + 0x14);
        if (iVar3 != iVar4) {
          iVar3 = iVar4;
          FUN_0041d3f0(&param_1);
          FUN_004042b0(iVar4);
          FUN_0040a130(iVar3);
        }
        param_1 = (int *)*param_1;
      } while (param_1 != DAT_0068a8f0);
    }
  }
  return 0;
}


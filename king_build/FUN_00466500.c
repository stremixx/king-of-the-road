
int * FUN_00466500(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0063f641;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  piVar2 = param_3;
  for (piVar3 = param_1; piVar3 != param_2; piVar3 = piVar3 + 0x1a) {
    if (piVar2 != (int *)0x0) {
      if ((piVar3[2] & 0x10000U) == 0) {
        piVar2[1] = 0;
        iVar1 = *piVar3;
        if (iVar1 == 0) {
          *piVar2 = 0;
          piVar2[2] = 0;
        }
        else {
          *piVar2 = iVar1;
          piVar2[2] = piVar3[2];
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        }
      }
      else {
        piVar2[2] = piVar3[2];
        *piVar2 = *piVar3;
        piVar2[1] = piVar3[1];
      }
      piVar2[4] = piVar3[4];
      piVar2[5] = piVar3[5];
      piVar2[6] = piVar3[6];
      piVar2[7] = piVar3[7];
      piVar2[8] = piVar3[8];
      piVar2[9] = piVar3[9];
      piVar2[10] = piVar3[10];
      piVar2[0xb] = piVar3[0xb];
      piVar2[0xc] = piVar3[0xc];
      piVar2[0xe] = piVar3[0xe];
      piVar2[0xf] = piVar3[0xf];
      piVar2[0x10] = piVar3[0x10];
      piVar2[0x11] = piVar3[0x11];
      piVar2[0x12] = piVar3[0x12];
      piVar2[0x14] = piVar3[0x14];
      param_1 = (int *)CONCAT13(param_3._3_1_,param_1._0_3_);
      piVar2[0x15] = piVar3[0x15];
      local_8 = 2;
      FUN_0044a420(piVar3[0x17] - piVar3[0x16],(int)&param_1 + 3);
      iVar1 = FUN_00407250(piVar3[0x16],piVar3[0x17],piVar2[0x16]);
      piVar2[0x17] = iVar1;
    }
    piVar2 = piVar2 + 0x1a;
  }
  *unaff_FS_OFFSET = local_10;
  return piVar2;
}


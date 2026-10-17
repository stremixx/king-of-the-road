
void FUN_00573ee0(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 local_40 [64];
  
  if (0 < DAT_006f2438) {
    param_2 = param_2 + 0x26;
    uVar6 = 0;
    do {
      uVar1 = uVar6 + 1;
      FUN_0061c369(local_40,&DAT_0066b8cc,uVar1);
      uVar3 = uVar6 & 0x80000003;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
      }
      iVar2 = param_3 + 0xf + uVar3 * 0x14;
      FUN_005e97a0(param_1,param_2 + -0x21,iVar2,DAT_006cdc84,local_40,6,0);
      FUN_005e97e0(param_1,param_2,iVar2,0x46,DAT_006cdc84,(&DAT_006f22e8)[uVar6],6,0);
      if (*(int *)(DAT_006cdbf8 + 0x180) < 2) {
        iVar4 = __ftol();
        FUN_0061c369(local_40,s__d__02d_0067b328,iVar4 / 0x3c,iVar4 % 0x3c);
      }
      else {
        uVar5 = __ftol();
        FUN_0061c369(local_40,&PTR_LAB_006769d4,uVar5);
      }
      FUN_005e97a0(param_1,param_2 + 0x4a,iVar2,DAT_006cdc84,local_40,6,0);
      if (uVar6 == 3) {
        param_2 = param_2 + 0xb5;
      }
      uVar6 = uVar1;
    } while ((int)uVar1 < DAT_006f2438);
  }
  return;
}



void __thiscall FUN_006127e0(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  undefined4 local_c4 [16];
  undefined1 auStack_84 [64];
  undefined1 auStack_44 [64];
  undefined4 uStack_4;
  
  if (DAT_00724d90 != 0) {
    DVar2 = timeGetTime();
    uVar5 = 0;
    if (param_1[4] != 0) {
      iVar4 = 0;
      do {
        puVar3 = (undefined4 *)(param_1[3] + iVar4);
        uVar1 = *puVar3;
        local_c4[0] = puVar3[1];
        fVar6 = (float10)(**(code **)(*(int *)*param_1 + 0x28))(puVar3);
        FUN_0060a020(auStack_84,DVar2,uVar1,(float)fVar6);
        FUN_00609fc0(local_c4,*(undefined4 *)(param_1[3] + 0x34 + iVar4));
        FUN_0060a070(auStack_44,auStack_84,local_c4);
        (**(code **)(*param_2 + 0x2c))(param_2,1,auStack_44);
        FUN_005b06d0(uStack_4,0,0,0);
        (**(code **)(*param_2 + 0x50))(param_2,0x88,1);
        (**(code **)(*param_2 + 100))(param_2,1,0x42,param_1[2],param_1[6],0);
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x3c;
      } while (uVar5 < (uint)param_1[4]);
    }
    uVar5 = 0;
    if (param_1[4] != 0) {
      iVar4 = 0;
      do {
        if ((*(uint *)(param_1[3] + 0x28 + iVar4) < DVar2) ||
           (*(float *)(param_1[3] + iVar4 + 8) < (float)param_1[7])) {
          FUN_006125e0(uVar5);
        }
        FUN_00612470(DVar2);
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x3c;
      } while (uVar5 < (uint)param_1[4]);
    }
    (**(code **)(*param_2 + 0x2c))(param_2,1,&DAT_00724e98);
  }
  return;
}


// Copyright 2014 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef V8_COMPILER_BACKEND_RISCV_INSTRUCTION_CODES_RISCV_H_
#define V8_COMPILER_BACKEND_RISCV_INSTRUCTION_CODES_RISCV_H_

namespace v8 {
namespace internal {
namespace compiler {

// RISC-V-specific opcodes that specify which assembly sequence to emit.
// Most opcodes specify a single instruction.
#define TARGET_ARCH_OPCODE_LIST(V)           \
  V(RiscvAdd)                               \
  V(RiscvDadd)                              \
  V(RiscvDaddOvf)                           \
  V(RiscvSub)                               \
  V(RiscvDsub)                              \
  V(RiscvDsubOvf)                           \
  V(RiscvMul)                               \
  V(RiscvMulOvf)                            \
  V(RiscvMulHigh)                           \
  V(RiscvDMulHigh)                          \
  V(RiscvMulHighU)                          \
  V(RiscvDmul)                              \
  V(RiscvDiv)                               \
  V(RiscvDdiv)                              \
  V(RiscvDivU)                              \
  V(RiscvDdivU)                             \
  V(RiscvMod)                               \
  V(RiscvDmod)                              \
  V(RiscvModU)                              \
  V(RiscvDmodU)                             \
  V(RiscvAnd)                               \
  V(RiscvAnd32)                             \
  V(RiscvOr)                                \
  V(RiscvOr32)                              \
  V(RiscvNor)                               \
  V(RiscvNor32)                             \
  V(RiscvXor)                               \
  V(RiscvXor32)                             \
  V(RiscvClz)                               \
  V(RiscvLsa)                               \
  V(RiscvDlsa)                              \
  V(RiscvShl)                               \
  V(RiscvShr)                               \
  V(RiscvSar)                               \
  V(RiscvExt)                               \
  V(RiscvIns)                               \
  V(RiscvDext)                              \
  V(RiscvDins)                              \
  V(RiscvDclz)                              \
  V(RiscvCtz)                               \
  V(RiscvDctz)                              \
  V(RiscvPopcnt)                            \
  V(RiscvDpopcnt)                           \
  V(RiscvDshl)                              \
  V(RiscvDshr)                              \
  V(RiscvDsar)                              \
  V(RiscvRor)                               \
  V(RiscvDror)                              \
  V(RiscvMov)                               \
  V(RiscvTst)                               \
  V(RiscvCmp)                               \
  V(RiscvCmpS)                              \
  V(RiscvAddS)                              \
  V(RiscvSubS)                              \
  V(RiscvMulS)                              \
  V(RiscvDivS)                              \
  V(RiscvModS)                              \
  V(RiscvAbsS)                              \
  V(RiscvNegS)                              \
  V(RiscvSqrtS)                             \
  V(RiscvMaxS)                              \
  V(RiscvMinS)                              \
  V(RiscvCmpD)                              \
  V(RiscvAddD)                              \
  V(RiscvSubD)                              \
  V(RiscvMulD)                              \
  V(RiscvDivD)                              \
  V(RiscvModD)                              \
  V(RiscvAbsD)                              \
  V(RiscvNegD)                              \
  V(RiscvSqrtD)                             \
  V(RiscvMaxD)                              \
  V(RiscvMinD)                              \
  V(RiscvFloat64RoundDown)                  \
  V(RiscvFloat64RoundTruncate)              \
  V(RiscvFloat64RoundUp)                    \
  V(RiscvFloat64RoundTiesEven)              \
  V(RiscvFloat32RoundDown)                  \
  V(RiscvFloat32RoundTruncate)              \
  V(RiscvFloat32RoundUp)                    \
  V(RiscvFloat32RoundTiesEven)              \
  V(RiscvCvtSD)                             \
  V(RiscvCvtDS)                             \
  V(RiscvTruncWD)                           \
  V(RiscvRoundWD)                           \
  V(RiscvFloorWD)                           \
  V(RiscvCeilWD)                            \
  V(RiscvTruncWS)                           \
  V(RiscvRoundWS)                           \
  V(RiscvFloorWS)                           \
  V(RiscvCeilWS)                            \
  V(RiscvTruncLS)                           \
  V(RiscvTruncLD)                           \
  V(RiscvTruncUwD)                          \
  V(RiscvTruncUwS)                          \
  V(RiscvTruncUlS)                          \
  V(RiscvTruncUlD)                          \
  V(RiscvCvtDW)                             \
  V(RiscvCvtSL)                             \
  V(RiscvCvtSW)                             \
  V(RiscvCvtSUw)                            \
  V(RiscvCvtSUl)                            \
  V(RiscvCvtDL)                             \
  V(RiscvCvtDUw)                            \
  V(RiscvCvtDUl)                            \
  V(RiscvLb)                                \
  V(RiscvLbu)                               \
  V(RiscvSb)                                \
  V(RiscvLh)                                \
  V(RiscvUlh)                               \
  V(RiscvLhu)                               \
  V(RiscvUlhu)                              \
  V(RiscvSh)                                \
  V(RiscvUsh)                               \
  V(RiscvLd)                                \
  V(RiscvUld)                               \
  V(RiscvLw)                                \
  V(RiscvUlw)                               \
  V(RiscvLwu)                               \
  V(RiscvUlwu)                              \
  V(RiscvSw)                                \
  V(RiscvUsw)                               \
  V(RiscvSd)                                \
  V(RiscvUsd)                               \
  V(RiscvLwc1)                              \
  V(RiscvUlwc1)                             \
  V(RiscvSwc1)                              \
  V(RiscvUswc1)                             \
  V(RiscvLdc1)                              \
  V(RiscvUldc1)                             \
  V(RiscvSdc1)                              \
  V(RiscvUsdc1)                             \
  V(RiscvBitcastDL)                         \
  V(RiscvBitcastLD)                         \
  V(RiscvFloat64ExtractLowWord32)           \
  V(RiscvFloat64ExtractHighWord32)          \
  V(RiscvFloat64InsertLowWord32)            \
  V(RiscvFloat64InsertHighWord32)           \
  V(RiscvFloat32Max)                        \
  V(RiscvFloat64Max)                        \
  V(RiscvFloat32Min)                        \
  V(RiscvFloat64Min)                        \
  V(RiscvFloat64SilenceNaN)                 \
  V(RiscvPush)                              \
  V(RiscvPeek)                              \
  V(RiscvByteSwap64)                        \
  V(RiscvByteSwap32)                        \
  V(RiscvStoreToStackSlot)                  \
  V(RiscvStackClaim)                        \
  V(RiscvSeb)                               \
  V(RiscvSeh)                               \
  V(RiscvSync)                              \
  V(RiscvAssertEqual)                       \
  V(RiscvS128Zero)                          \
  V(RiscvI32x4Splat)                        \
  V(RiscvI32x4ExtractLane)                  \
  V(RiscvI32x4ReplaceLane)                  \
  V(RiscvI32x4Add)                          \
  V(RiscvI32x4AddHoriz)                     \
  V(RiscvI32x4Sub)                          \
  V(RiscvF64x2Abs)                          \
  V(RiscvF64x2Neg)                          \
  V(RiscvF32x4Splat)                        \
  V(RiscvF32x4ExtractLane)                  \
  V(RiscvF32x4ReplaceLane)                  \
  V(RiscvF32x4SConvertI32x4)                \
  V(RiscvF32x4UConvertI32x4)                \
  V(RiscvI32x4Mul)                          \
  V(RiscvI32x4MaxS)                         \
  V(RiscvI32x4MinS)                         \
  V(RiscvI32x4Eq)                           \
  V(RiscvI32x4Ne)                           \
  V(RiscvI32x4Shl)                          \
  V(RiscvI32x4ShrS)                         \
  V(RiscvI32x4ShrU)                         \
  V(RiscvI32x4MaxU)                         \
  V(RiscvI32x4MinU)                         \
  V(RiscvF64x2Sqrt)                         \
  V(RiscvF64x2Add)                          \
  V(RiscvF64x2Sub)                          \
  V(RiscvF64x2Mul)                          \
  V(RiscvF64x2Div)                          \
  V(RiscvF64x2Min)                          \
  V(RiscvF64x2Max)                          \
  V(RiscvF64x2Eq)                           \
  V(RiscvF64x2Ne)                           \
  V(RiscvF64x2Lt)                           \
  V(RiscvF64x2Le)                           \
  V(RiscvF64x2Splat)                        \
  V(RiscvF64x2ExtractLane)                  \
  V(RiscvF64x2ReplaceLane)                  \
  V(RiscvI64x2Add)                          \
  V(RiscvI64x2Sub)                          \
  V(RiscvI64x2Mul)                          \
  V(RiscvI64x2Neg)                          \
  V(RiscvI64x2Shl)                          \
  V(RiscvI64x2ShrS)                         \
  V(RiscvI64x2ShrU)                         \
  V(RiscvF32x4Abs)                          \
  V(RiscvF32x4Neg)                          \
  V(RiscvF32x4Sqrt)                         \
  V(RiscvF32x4RecipApprox)                  \
  V(RiscvF32x4RecipSqrtApprox)              \
  V(RiscvF32x4Add)                          \
  V(RiscvF32x4AddHoriz)                     \
  V(RiscvF32x4Sub)                          \
  V(RiscvF32x4Mul)                          \
  V(RiscvF32x4Div)                          \
  V(RiscvF32x4Max)                          \
  V(RiscvF32x4Min)                          \
  V(RiscvF32x4Eq)                           \
  V(RiscvF32x4Ne)                           \
  V(RiscvF32x4Lt)                           \
  V(RiscvF32x4Le)                           \
  V(RiscvI32x4SConvertF32x4)                \
  V(RiscvI32x4UConvertF32x4)                \
  V(RiscvI32x4Neg)                          \
  V(RiscvI32x4GtS)                          \
  V(RiscvI32x4GeS)                          \
  V(RiscvI32x4GtU)                          \
  V(RiscvI32x4GeU)                          \
  V(RiscvI16x8Splat)                        \
  V(RiscvI16x8ExtractLaneU)                 \
  V(RiscvI16x8ExtractLaneS)                 \
  V(RiscvI16x8ReplaceLane)                  \
  V(RiscvI16x8Neg)                          \
  V(RiscvI16x8Shl)                          \
  V(RiscvI16x8ShrS)                         \
  V(RiscvI16x8ShrU)                         \
  V(RiscvI16x8Add)                          \
  V(RiscvI16x8AddSaturateS)                 \
  V(RiscvI16x8AddHoriz)                     \
  V(RiscvI16x8Sub)                          \
  V(RiscvI16x8SubSaturateS)                 \
  V(RiscvI16x8Mul)                          \
  V(RiscvI16x8MaxS)                         \
  V(RiscvI16x8MinS)                         \
  V(RiscvI16x8Eq)                           \
  V(RiscvI16x8Ne)                           \
  V(RiscvI16x8GtS)                          \
  V(RiscvI16x8GeS)                          \
  V(RiscvI16x8AddSaturateU)                 \
  V(RiscvI16x8SubSaturateU)                 \
  V(RiscvI16x8MaxU)                         \
  V(RiscvI16x8MinU)                         \
  V(RiscvI16x8GtU)                          \
  V(RiscvI16x8GeU)                          \
  V(RiscvI16x8RoundingAverageU)             \
  V(RiscvI8x16Splat)                        \
  V(RiscvI8x16ExtractLaneU)                 \
  V(RiscvI8x16ExtractLaneS)                 \
  V(RiscvI8x16ReplaceLane)                  \
  V(RiscvI8x16Neg)                          \
  V(RiscvI8x16Shl)                          \
  V(RiscvI8x16ShrS)                         \
  V(RiscvI8x16Add)                          \
  V(RiscvI8x16AddSaturateS)                 \
  V(RiscvI8x16Sub)                          \
  V(RiscvI8x16SubSaturateS)                 \
  V(RiscvI8x16Mul)                          \
  V(RiscvI8x16MaxS)                         \
  V(RiscvI8x16MinS)                         \
  V(RiscvI8x16Eq)                           \
  V(RiscvI8x16Ne)                           \
  V(RiscvI8x16GtS)                          \
  V(RiscvI8x16GeS)                          \
  V(RiscvI8x16ShrU)                         \
  V(RiscvI8x16AddSaturateU)                 \
  V(RiscvI8x16SubSaturateU)                 \
  V(RiscvI8x16MaxU)                         \
  V(RiscvI8x16MinU)                         \
  V(RiscvI8x16GtU)                          \
  V(RiscvI8x16GeU)                          \
  V(RiscvI8x16RoundingAverageU)             \
  V(RiscvS128And)                           \
  V(RiscvS128Or)                            \
  V(RiscvS128Xor)                           \
  V(RiscvS128Not)                           \
  V(RiscvS128Select)                        \
  V(RiscvS1x4AnyTrue)                       \
  V(RiscvS1x4AllTrue)                       \
  V(RiscvS1x8AnyTrue)                       \
  V(RiscvS1x8AllTrue)                       \
  V(RiscvS1x16AnyTrue)                      \
  V(RiscvS1x16AllTrue)                      \
  V(RiscvS32x4InterleaveRight)              \
  V(RiscvS32x4InterleaveLeft)               \
  V(RiscvS32x4PackEven)                     \
  V(RiscvS32x4PackOdd)                      \
  V(RiscvS32x4InterleaveEven)               \
  V(RiscvS32x4InterleaveOdd)                \
  V(RiscvS32x4Shuffle)                      \
  V(RiscvS16x8InterleaveRight)              \
  V(RiscvS16x8InterleaveLeft)               \
  V(RiscvS16x8PackEven)                     \
  V(RiscvS16x8PackOdd)                      \
  V(RiscvS16x8InterleaveEven)               \
  V(RiscvS16x8InterleaveOdd)                \
  V(RiscvS16x4Reverse)                      \
  V(RiscvS16x2Reverse)                      \
  V(RiscvS8x16InterleaveRight)              \
  V(RiscvS8x16InterleaveLeft)               \
  V(RiscvS8x16PackEven)                     \
  V(RiscvS8x16PackOdd)                      \
  V(RiscvS8x16InterleaveEven)               \
  V(RiscvS8x16InterleaveOdd)                \
  V(RiscvS8x16Shuffle)                      \
  V(RiscvS8x16Swizzle)                      \
  V(RiscvS8x16Concat)                       \
  V(RiscvS8x8Reverse)                       \
  V(RiscvS8x4Reverse)                       \
  V(RiscvS8x2Reverse)                       \
  V(RiscvS8x16LoadSplat)                    \
  V(RiscvS16x8LoadSplat)                    \
  V(RiscvS32x4LoadSplat)                    \
  V(RiscvS64x2LoadSplat)                    \
  V(RiscvI16x8Load8x8S)                     \
  V(RiscvI16x8Load8x8U)                     \
  V(RiscvI32x4Load16x4S)                    \
  V(RiscvI32x4Load16x4U)                    \
  V(RiscvI64x2Load32x2S)                    \
  V(RiscvI64x2Load32x2U)                    \
  V(RiscvMsaLd)                             \
  V(RiscvMsaSt)                             \
  V(RiscvI32x4SConvertI16x8Low)             \
  V(RiscvI32x4SConvertI16x8High)            \
  V(RiscvI32x4UConvertI16x8Low)             \
  V(RiscvI32x4UConvertI16x8High)            \
  V(RiscvI16x8SConvertI8x16Low)             \
  V(RiscvI16x8SConvertI8x16High)            \
  V(RiscvI16x8SConvertI32x4)                \
  V(RiscvI16x8UConvertI32x4)                \
  V(RiscvI16x8UConvertI8x16Low)             \
  V(RiscvI16x8UConvertI8x16High)            \
  V(RiscvI8x16SConvertI16x8)                \
  V(RiscvI8x16UConvertI16x8)                \
  V(RiscvWord64AtomicLoadUint8)             \
  V(RiscvWord64AtomicLoadUint16)            \
  V(RiscvWord64AtomicLoadUint32)            \
  V(RiscvWord64AtomicLoadUint64)            \
  V(RiscvWord64AtomicStoreWord8)            \
  V(RiscvWord64AtomicStoreWord16)           \
  V(RiscvWord64AtomicStoreWord32)           \
  V(RiscvWord64AtomicStoreWord64)           \
  V(RiscvWord64AtomicAddUint8)              \
  V(RiscvWord64AtomicAddUint16)             \
  V(RiscvWord64AtomicAddUint32)             \
  V(RiscvWord64AtomicAddUint64)             \
  V(RiscvWord64AtomicSubUint8)              \
  V(RiscvWord64AtomicSubUint16)             \
  V(RiscvWord64AtomicSubUint32)             \
  V(RiscvWord64AtomicSubUint64)             \
  V(RiscvWord64AtomicAndUint8)              \
  V(RiscvWord64AtomicAndUint16)             \
  V(RiscvWord64AtomicAndUint32)             \
  V(RiscvWord64AtomicAndUint64)             \
  V(RiscvWord64AtomicOrUint8)               \
  V(RiscvWord64AtomicOrUint16)              \
  V(RiscvWord64AtomicOrUint32)              \
  V(RiscvWord64AtomicOrUint64)              \
  V(RiscvWord64AtomicXorUint8)              \
  V(RiscvWord64AtomicXorUint16)             \
  V(RiscvWord64AtomicXorUint32)             \
  V(RiscvWord64AtomicXorUint64)             \
  V(RiscvWord64AtomicExchangeUint8)         \
  V(RiscvWord64AtomicExchangeUint16)        \
  V(RiscvWord64AtomicExchangeUint32)        \
  V(RiscvWord64AtomicExchangeUint64)        \
  V(RiscvWord64AtomicCompareExchangeUint8)  \
  V(RiscvWord64AtomicCompareExchangeUint16) \
  V(RiscvWord64AtomicCompareExchangeUint32) \
  V(RiscvWord64AtomicCompareExchangeUint64)

// Addressing modes represent the "shape" of inputs to an instruction.
// Many instructions support multiple addressing modes. Addressing modes
// are encoded into the InstructionCode of the instruction and tell the
// code generator after register allocation which assembler method to call.
//
// We use the following local notation for addressing modes:
//
// R = register
// O = register or stack slot
// D = double register
// I = immediate (handle, external, int32)
// MRI = [register + immediate]
// MRR = [register + register]
// TODO(plind): Add the new r6 address modes.
#define TARGET_ADDRESSING_MODE_LIST(V) \
  V(MRI) /* [%r0 + K] */               \
  V(MRR) /* [%r0 + %r1] */

}  // namespace compiler
}  // namespace internal
}  // namespace v8

#endif  // V8_COMPILER_BACKEND_RISCV_INSTRUCTION_CODES_RISCV_H_

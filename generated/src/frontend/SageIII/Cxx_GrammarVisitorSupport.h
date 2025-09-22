#ifndef ROSE_CxxGrammarVisitorSupport_H
#define ROSE_CxxGrammarVisitorSupport_H
// #line 60 "/workspace/src/ROSETTA/src/visitorSupport.C"
#include <Cxx_GrammarDeclarations.h>

#ifndef SWIG
class ROSE_VisitorPattern  {
public:
    virtual ~ROSE_VisitorPattern() {};
    virtual void visitDefault(SgNode*) {}

    virtual void visit(SgJovialBitVal*);
    virtual void visit(SgName*);
    virtual void visit(SgSymbolTable*);
    virtual void visit(SgPragma*);
    virtual void visit(SgModifierNodes*);
    virtual void visit(SgConstVolatileModifier*);
    virtual void visit(SgStorageModifier*);
    virtual void visit(SgAccessModifier*);
    virtual void visit(SgFunctionModifier*);
    virtual void visit(SgUPC_AccessModifier*);
    virtual void visit(SgLinkageModifier*);
    virtual void visit(SgSpecialFunctionModifier*);
    virtual void visit(SgTypeModifier*);
    virtual void visit(SgElaboratedTypeModifier*);
    virtual void visit(SgBaseClassModifier*);
    virtual void visit(SgDeclarationModifier*);
    virtual void visit(SgStructureModifier*);
    virtual void visit(SgOpenclAccessModeModifier*);
    virtual void visit(SgModifier*);
    virtual void visit(Sg_File_Info*);
    virtual void visit(SgSourceFile*);
    virtual void visit(SgUnknownFile*);
    virtual void visit(SgJvmComposite*);
    virtual void visit(SgBinaryComposite*);
    virtual void visit(SgFile*);
    virtual void visit(SgFileList*);
    virtual void visit(SgDirectory*);
    virtual void visit(SgDirectoryList*);
    virtual void visit(SgProject*);
    virtual void visit(SgOptions*);
    virtual void visit(SgUnparse_Info*);
    virtual void visit(SgIncludeFile*);
    virtual void visit(SgFuncDecl_attr*);
    virtual void visit(SgClassDecl_attr*);
    virtual void visit(SgTypedefSeq*);
    virtual void visit(SgFunctionParameterTypeList*);
    virtual void visit(SgTemplateParameter*);
    virtual void visit(SgTemplateArgument*);
    virtual void visit(SgTemplateParameterList*);
    virtual void visit(SgTemplateArgumentList*);
    virtual void visit(SgBitAttribute*);
    virtual void visit(SgAttribute*);
    virtual void visit(SgExpBaseClass*);
    virtual void visit(SgNonrealBaseClass*);
    virtual void visit(SgBaseClass*);
    virtual void visit(SgUndirectedGraphEdge*);
    virtual void visit(SgDirectedGraphEdge*);
    virtual void visit(SgGraphNode*);
    virtual void visit(SgGraphEdge*);
    virtual void visit(SgStringKeyedBidirectionalGraph*);
    virtual void visit(SgIntKeyedBidirectionalGraph*);
    virtual void visit(SgBidirectionalGraph*);
    virtual void visit(SgIncidenceDirectedGraph*);
    virtual void visit(SgIncidenceUndirectedGraph*);
    virtual void visit(SgGraph*);
    virtual void visit(SgGraphNodeList*);
    virtual void visit(SgGraphEdgeList*);
    virtual void visit(SgQualifiedName*);
    virtual void visit(SgNameGroup*);
    virtual void visit(SgDimensionObject*);
    virtual void visit(SgDataStatementGroup*);
    virtual void visit(SgDataStatementObject*);
    virtual void visit(SgDataStatementValue*);
    virtual void visit(SgFormatItem*);
    virtual void visit(SgFormatItemList*);
    virtual void visit(SgTypeTable*);
    virtual void visit(SgJavaImportStatementList*);
    virtual void visit(SgJavaClassDeclarationList*);
    virtual void visit(SgHeaderFileReport*);
    virtual void visit(SgSupport*);
    virtual void visit(SgTypeUnknown*);
    virtual void visit(SgTypeChar*);
    virtual void visit(SgTypeSignedChar*);
    virtual void visit(SgTypeUnsignedChar*);
    virtual void visit(SgTypeShort*);
    virtual void visit(SgTypeSignedShort*);
    virtual void visit(SgTypeUnsignedShort*);
    virtual void visit(SgTypeInt*);
    virtual void visit(SgTypeSignedInt*);
    virtual void visit(SgTypeUnsignedInt*);
    virtual void visit(SgTypeLong*);
    virtual void visit(SgTypeSignedLong*);
    virtual void visit(SgTypeUnsignedLong*);
    virtual void visit(SgTypeVoid*);
    virtual void visit(SgTypeGlobalVoid*);
    virtual void visit(SgTypeWchar*);
    virtual void visit(SgTypeFloat*);
    virtual void visit(SgTypeDouble*);
    virtual void visit(SgTypeLongLong*);
    virtual void visit(SgTypeSignedLongLong*);
    virtual void visit(SgTypeUnsignedLongLong*);
    virtual void visit(SgTypeLongDouble*);
    virtual void visit(SgTypeFloat80*);
    virtual void visit(SgTypeFloat128*);
    virtual void visit(SgTypeString*);
    virtual void visit(SgTypeBool*);
    virtual void visit(SgTypeFixed*);
    virtual void visit(SgTypeMatrix*);
    virtual void visit(SgTypeTuple*);
    virtual void visit(SgTypeNullptr*);
    virtual void visit(SgTypeComplex*);
    virtual void visit(SgTypeImaginary*);
    virtual void visit(SgTypeDefault*);
    virtual void visit(SgPointerMemberType*);
    virtual void visit(SgReferenceType*);
    virtual void visit(SgRvalueReferenceType*);
    virtual void visit(SgDeclType*);
    virtual void visit(SgTypeOfType*);
    virtual void visit(SgTypeCAFTeam*);
    virtual void visit(SgTypeUnsigned128bitInteger*);
    virtual void visit(SgTypeSigned128bitInteger*);
    virtual void visit(SgTypeLabel*);
    virtual void visit(SgJavaParameterizedType*);
    virtual void visit(SgJavaQualifiedType*);
    virtual void visit(SgJavaWildcardType*);
    virtual void visit(SgJavaUnionType*);
    virtual void visit(SgJavaParameterType*);
    virtual void visit(SgJovialTableType*);
    virtual void visit(SgTemplateType*);
    virtual void visit(SgEnumType*);
    virtual void visit(SgTypedefType*);
    virtual void visit(SgNonrealType*);
    virtual void visit(SgAutoType*);
    virtual void visit(SgModifierType*);
    virtual void visit(SgPartialFunctionModifierType*);
    virtual void visit(SgArrayType*);
    virtual void visit(SgTypeEllipse*);
    virtual void visit(SgAdaAccessType*);
    virtual void visit(SgAdaSubtype*);
    virtual void visit(SgAdaDerivedType*);
    virtual void visit(SgAdaModularType*);
    virtual void visit(SgAdaDiscriminatedType*);
    virtual void visit(SgAdaFormalType*);
    virtual void visit(SgAdaDiscreteType*);
    virtual void visit(SgAdaSubroutineType*);
    virtual void visit(SgRangeType*);
    virtual void visit(SgJovialBitType*);
    virtual void visit(SgTypeCrayPointer*);
    virtual void visit(SgPartialFunctionType*);
    virtual void visit(SgMemberFunctionType*);
    virtual void visit(SgFunctionType*);
    virtual void visit(SgPointerType*);
    virtual void visit(SgAdaTaskType*);
    virtual void visit(SgAdaProtectedType*);
    virtual void visit(SgScopedType*);
    virtual void visit(SgClassType*);
    virtual void visit(SgNamedType*);
    virtual void visit(SgQualifiedNameType*);
    virtual void visit(SgTypeChar16*);
    virtual void visit(SgTypeChar32*);
    virtual void visit(SgType*);
    virtual void visit(SgForStatement*);
    virtual void visit(SgForInitStatement*);
    virtual void visit(SgRangeBasedForStatement*);
    virtual void visit(SgCatchStatementSeq*);
    virtual void visit(SgFunctionParameterList*);
    virtual void visit(SgAdaParameterList*);
    virtual void visit(SgCtorInitializerList*);
    virtual void visit(SgBasicBlock*);
    virtual void visit(SgGlobal*);
    virtual void visit(SgIfStmt*);
    virtual void visit(SgWhileStmt*);
    virtual void visit(SgDoWhileStmt*);
    virtual void visit(SgSwitchStatement*);
    virtual void visit(SgCatchOptionStmt*);
    virtual void visit(SgFunctionParameterScope*);
    virtual void visit(SgDeclarationScope*);
    virtual void visit(SgVariableDefinition*);
    virtual void visit(SgStmtDeclarationStatement*);
    virtual void visit(SgEnumDeclaration*);
    virtual void visit(SgAsmStmt*);
    virtual void visit(SgFunctionTypeTable*);
    virtual void visit(SgExprStatement*);
    virtual void visit(SgLabelStatement*);
    virtual void visit(SgCaseOptionStmt*);
    virtual void visit(SgTryStmt*);
    virtual void visit(SgDefaultOptionStmt*);
    virtual void visit(SgBreakStmt*);
    virtual void visit(SgContinueStmt*);
    virtual void visit(SgReturnStmt*);
    virtual void visit(SgGotoStatement*);
    virtual void visit(SgAdaExitStmt*);
    virtual void visit(SgAdaLoopStmt*);
    virtual void visit(SgAdaDelayStmt*);
    virtual void visit(SgAdaSelectStmt*);
    virtual void visit(SgAdaSelectAlternativeStmt*);
    virtual void visit(SgAdaTerminateStmt*);
    virtual void visit(SgAdaUnscopedBlock*);
    virtual void visit(SgAdaVariantWhenStmt*);
    virtual void visit(SgSpawnStmt*);
    virtual void visit(SgFortranContinueStmt*);
    virtual void visit(SgTemplateTypedefDeclaration*);
    virtual void visit(SgTemplateInstantiationTypedefDeclaration*);
    virtual void visit(SgTypedefDeclaration*);
    virtual void visit(SgNullStatement*);
    virtual void visit(SgVariantStatement*);
    virtual void visit(SgPragmaDeclaration*);
    virtual void visit(SgTemplateClassDeclaration*);
    virtual void visit(SgTemplateMemberFunctionDeclaration*);
    virtual void visit(SgTemplateFunctionDeclaration*);
    virtual void visit(SgTemplateVariableDeclaration*);
    virtual void visit(SgTemplateVariableInstantiation*);
    virtual void visit(SgTemplateDeclaration*);
    virtual void visit(SgVariableDeclaration*);
    virtual void visit(SgTemplateInstantiationDecl*);
    virtual void visit(SgTemplateInstantiationDefn*);
    virtual void visit(SgTemplateInstantiationFunctionDecl*);
    virtual void visit(SgTemplateInstantiationMemberFunctionDecl*);
    virtual void visit(SgNonrealDecl*);
    virtual void visit(SgWithStatement*);
    virtual void visit(SgPythonGlobalStmt*);
    virtual void visit(SgPythonPrintStmt*);
    virtual void visit(SgPassStatement*);
    virtual void visit(SgAssertStmt*);
    virtual void visit(SgExecStatement*);
    virtual void visit(SgProgramHeaderStatement*);
    virtual void visit(SgProcedureHeaderStatement*);
    virtual void visit(SgEntryStatement*);
    virtual void visit(SgFortranNonblockedDo*);
    virtual void visit(SgInterfaceStatement*);
    virtual void visit(SgParameterStatement*);
    virtual void visit(SgCommonBlock*);
    virtual void visit(SgModuleStatement*);
    virtual void visit(SgUseStatement*);
    virtual void visit(SgProcessControlStatement*);
    virtual void visit(SgPrintStatement*);
    virtual void visit(SgReadStatement*);
    virtual void visit(SgWriteStatement*);
    virtual void visit(SgOpenStatement*);
    virtual void visit(SgCloseStatement*);
    virtual void visit(SgInquireStatement*);
    virtual void visit(SgFlushStatement*);
    virtual void visit(SgBackspaceStatement*);
    virtual void visit(SgRewindStatement*);
    virtual void visit(SgEndfileStatement*);
    virtual void visit(SgWaitStatement*);
    virtual void visit(SgCAFWithTeamStatement*);
    virtual void visit(SgFormatStatement*);
    virtual void visit(SgFortranDo*);
    virtual void visit(SgForAllStatement*);
    virtual void visit(SgIOStatement*);
    virtual void visit(SgSyncAllStatement*);
    virtual void visit(SgSyncImagesStatement*);
    virtual void visit(SgSyncMemoryStatement*);
    virtual void visit(SgSyncTeamStatement*);
    virtual void visit(SgLockStatement*);
    virtual void visit(SgUnlockStatement*);
    virtual void visit(SgImageControlStatement*);
    virtual void visit(SgJovialCompoolStatement*);
    virtual void visit(SgJovialDefineDeclaration*);
    virtual void visit(SgJovialDirectiveStatement*);
    virtual void visit(SgJovialLabelDeclaration*);
    virtual void visit(SgJovialOverlayDeclaration*);
    virtual void visit(SgJovialForThenStatement*);
    virtual void visit(SgMatlabForStatement*);
    virtual void visit(SgUpcNotifyStatement*);
    virtual void visit(SgUpcWaitStatement*);
    virtual void visit(SgUpcBarrierStatement*);
    virtual void visit(SgUpcFenceStatement*);
    virtual void visit(SgUpcForAllStatement*);
    virtual void visit(SgOmpParallelStatement*);
    virtual void visit(SgOmpSingleStatement*);
    virtual void visit(SgOmpTaskStatement*);
    virtual void visit(SgOmpForStatement*);
    virtual void visit(SgOmpForSimdStatement*);
    virtual void visit(SgOmpDoStatement*);
    virtual void visit(SgOmpSectionsStatement*);
    virtual void visit(SgOmpAtomicStatement*);
    virtual void visit(SgOmpTargetStatement*);
    virtual void visit(SgOmpTargetDataStatement*);
    virtual void visit(SgOmpSimdStatement*);
    virtual void visit(SgOmpClauseBodyStatement*);
    virtual void visit(SgOmpMasterStatement*);
    virtual void visit(SgOmpSectionStatement*);
    virtual void visit(SgOmpOrderedStatement*);
    virtual void visit(SgOmpWorkshareStatement*);
    virtual void visit(SgOmpCriticalStatement*);
    virtual void visit(SgOmpBodyStatement*);
    virtual void visit(SgJavaThrowStatement*);
    virtual void visit(SgJavaForEachStatement*);
    virtual void visit(SgJavaSynchronizedStatement*);
    virtual void visit(SgJavaLabelStatement*);
    virtual void visit(SgJavaImportStatement*);
    virtual void visit(SgJavaPackageDeclaration*);
    virtual void visit(SgJavaPackageStatement*);
    virtual void visit(SgAsyncStmt*);
    virtual void visit(SgFinishStmt*);
    virtual void visit(SgAtStmt*);
    virtual void visit(SgAtomicStmt*);
    virtual void visit(SgWhenStmt*);
    virtual void visit(SgBlockDataStatement*);
    virtual void visit(SgImplicitStatement*);
    virtual void visit(SgStatementFunctionStatement*);
    virtual void visit(SgWhereStatement*);
    virtual void visit(SgNullifyStatement*);
    virtual void visit(SgEquivalenceStatement*);
    virtual void visit(SgDerivedTypeStatement*);
    virtual void visit(SgJovialTableStatement*);
    virtual void visit(SgAttributeSpecificationStatement*);
    virtual void visit(SgAllocateStatement*);
    virtual void visit(SgDeallocateStatement*);
    virtual void visit(SgContainsStatement*);
    virtual void visit(SgSequenceStatement*);
    virtual void visit(SgElseWhereStatement*);
    virtual void visit(SgArithmeticIfStatement*);
    virtual void visit(SgAssignStatement*);
    virtual void visit(SgComputedGotoStatement*);
    virtual void visit(SgAssignedGotoStatement*);
    virtual void visit(SgNamelistStatement*);
    virtual void visit(SgImportStatement*);
    virtual void visit(SgAssociateStatement*);
    virtual void visit(SgFortranIncludeLine*);
    virtual void visit(SgNamespaceDeclarationStatement*);
    virtual void visit(SgNamespaceAliasDeclarationStatement*);
    virtual void visit(SgNamespaceDefinitionStatement*);
    virtual void visit(SgUsingDeclarationStatement*);
    virtual void visit(SgUsingDirectiveStatement*);
    virtual void visit(SgTemplateInstantiationDirectiveStatement*);
    virtual void visit(SgStaticAssertionDeclaration*);
    virtual void visit(SgTemplateClassDefinition*);
    virtual void visit(SgTemplateFunctionDefinition*);
    virtual void visit(SgClassDeclaration*);
    virtual void visit(SgClassDefinition*);
    virtual void visit(SgFunctionDefinition*);
    virtual void visit(SgAdaAcceptStmt*);
    virtual void visit(SgAdaPackageBody*);
    virtual void visit(SgAdaPackageSpec*);
    virtual void visit(SgAdaTaskBody*);
    virtual void visit(SgAdaTaskSpec*);
    virtual void visit(SgAdaProtectedBody*);
    virtual void visit(SgAdaProtectedSpec*);
    virtual void visit(SgAdaGenericDefn*);
    virtual void visit(SgScopeStatement*);
    virtual void visit(SgMemberFunctionDeclaration*);
    virtual void visit(SgAdaEntryDecl*);
    virtual void visit(SgAdaFunctionRenamingDecl*);
    virtual void visit(SgFunctionDeclaration*);
    virtual void visit(SgIncludeDirectiveStatement*);
    virtual void visit(SgDefineDirectiveStatement*);
    virtual void visit(SgUndefDirectiveStatement*);
    virtual void visit(SgIfdefDirectiveStatement*);
    virtual void visit(SgIfndefDirectiveStatement*);
    virtual void visit(SgIfDirectiveStatement*);
    virtual void visit(SgDeadIfDirectiveStatement*);
    virtual void visit(SgElseDirectiveStatement*);
    virtual void visit(SgElseifDirectiveStatement*);
    virtual void visit(SgEndifDirectiveStatement*);
    virtual void visit(SgLineDirectiveStatement*);
    virtual void visit(SgWarningDirectiveStatement*);
    virtual void visit(SgErrorDirectiveStatement*);
    virtual void visit(SgEmptyDirectiveStatement*);
    virtual void visit(SgIncludeNextDirectiveStatement*);
    virtual void visit(SgIdentDirectiveStatement*);
    virtual void visit(SgLinemarkerDirectiveStatement*);
    virtual void visit(SgC_PreprocessorDirectiveStatement*);
    virtual void visit(SgClinkageStartStatement*);
    virtual void visit(SgClinkageEndStatement*);
    virtual void visit(SgClinkageDeclarationStatement*);
    virtual void visit(SgOmpFlushStatement*);
    virtual void visit(SgOmpDeclareSimdStatement*);
    virtual void visit(SgOmpBarrierStatement*);
    virtual void visit(SgOmpTaskwaitStatement*);
    virtual void visit(SgOmpThreadprivateStatement*);
    virtual void visit(SgMicrosoftAttributeDeclaration*);
    virtual void visit(SgEmptyDeclaration*);
    virtual void visit(SgAdaPackageSpecDecl*);
    virtual void visit(SgAdaPackageBodyDecl*);
    virtual void visit(SgAdaTaskSpecDecl*);
    virtual void visit(SgAdaTaskTypeDecl*);
    virtual void visit(SgAdaTaskBodyDecl*);
    virtual void visit(SgAdaProtectedSpecDecl*);
    virtual void visit(SgAdaProtectedTypeDecl*);
    virtual void visit(SgAdaProtectedBodyDecl*);
    virtual void visit(SgAdaRepresentationClause*);
    virtual void visit(SgAdaEnumRepresentationClause*);
    virtual void visit(SgAdaAttributeClause*);
    virtual void visit(SgAdaComponentClause*);
    virtual void visit(SgAdaRenamingDecl*);
    virtual void visit(SgAdaGenericDecl*);
    virtual void visit(SgAdaGenericInstanceDecl*);
    virtual void visit(SgAdaFormalTypeDecl*);
    virtual void visit(SgAdaFormalPackageDecl*);
    virtual void visit(SgAdaDiscriminatedTypeDecl*);
    virtual void visit(SgAdaVariantDecl*);
    virtual void visit(SgDeclarationStatement*);
    virtual void visit(SgStatement*);
    virtual void visit(SgAbsOp*);
    virtual void visit(SgActualArgumentExpression*);
    virtual void visit(SgAdaAncestorInitializer*);
    virtual void visit(SgAdaAttributeExp*);
    virtual void visit(SgAdaFloatVal*);
    virtual void visit(SgAdaOthersExp*);
    virtual void visit(SgAdaProtectedRefExp*);
    virtual void visit(SgAdaRenamingRefExp*);
    virtual void visit(SgAdaTaskRefExp*);
    virtual void visit(SgAdaUnitRefExp*);
    virtual void visit(SgAddOp*);
    virtual void visit(SgAddressOfOp*);
    virtual void visit(SgAggregateInitializer*);
    virtual void visit(SgAlignOfOp*);
    virtual void visit(SgAndAssignOp*);
    virtual void visit(SgAndOp*);
    virtual void visit(SgArrowExp*);
    virtual void visit(SgArrowStarOp*);
    virtual void visit(SgAsmOp*);
    virtual void visit(SgAssignInitializer*);
    virtual void visit(SgAssignOp*);
    virtual void visit(SgAsteriskShapeExp*);
    virtual void visit(SgAtExp*);
    virtual void visit(SgAtOp*);
    virtual void visit(SgAwaitExpression*);
    virtual void visit(SgBitAndOp*);
    virtual void visit(SgBitComplementOp*);
    virtual void visit(SgBitEqvOp*);
    virtual void visit(SgBitOrOp*);
    virtual void visit(SgBitXorOp*);
    virtual void visit(SgBoolValExp*);
    virtual void visit(SgBracedInitializer*);
    virtual void visit(SgCAFCoExpression*);
    virtual void visit(SgCastExp*);
    virtual void visit(SgChar16Val*);
    virtual void visit(SgChar32Val*);
    virtual void visit(SgCharVal*);
    virtual void visit(SgChooseExpression*);
    virtual void visit(SgClassExp*);
    virtual void visit(SgClassNameRefExp*);
    virtual void visit(SgColonShapeExp*);
    virtual void visit(SgCommaOpExp*);
    virtual void visit(SgComplexVal*);
    virtual void visit(SgCompoundInitializer*);
    virtual void visit(SgCompoundLiteralExp*);
    virtual void visit(SgComprehension*);
    virtual void visit(SgConcatenationOp*);
    virtual void visit(SgConjugateOp*);
    virtual void visit(SgConditionalExp*);
    virtual void visit(SgConstructorInitializer*);
    virtual void visit(SgCudaKernelCallExp*);
    virtual void visit(SgCudaKernelExecConfig*);
    virtual void visit(SgDeleteExp*);
    virtual void visit(SgDesignatedInitializer*);
    virtual void visit(SgDictionaryComprehension*);
    virtual void visit(SgDictionaryExp*);
    virtual void visit(SgDivAssignOp*);
    virtual void visit(SgDivideOp*);
    virtual void visit(SgDotDotExp*);
    virtual void visit(SgDotExp*);
    virtual void visit(SgDotStarOp*);
    virtual void visit(SgDoubleVal*);
    virtual void visit(SgElementwiseAddOp*);
    virtual void visit(SgElementwiseDivideOp*);
    virtual void visit(SgElementwiseLeftDivideOp*);
    virtual void visit(SgElementwiseMultiplyOp*);
    virtual void visit(SgElementwisePowerOp*);
    virtual void visit(SgElementwiseSubtractOp*);
    virtual void visit(SgEnumVal*);
    virtual void visit(SgEqualityOp*);
    virtual void visit(SgExponentiationAssignOp*);
    virtual void visit(SgExponentiationOp*);
    virtual void visit(SgExpressionRoot*);
    virtual void visit(SgFinishExp*);
    virtual void visit(SgFloat128Val*);
    virtual void visit(SgFloat80Val*);
    virtual void visit(SgFloatVal*);
    virtual void visit(SgFoldExpression*);
    virtual void visit(SgFunctionParameterRefExp*);
    virtual void visit(SgFunctionRefExp*);
    virtual void visit(SgGreaterOrEqualOp*);
    virtual void visit(SgGreaterThanOp*);
    virtual void visit(SgHereExp*);
    virtual void visit(SgImagPartOp*);
    virtual void visit(SgImpliedDo*);
    virtual void visit(SgIntegerDivideAssignOp*);
    virtual void visit(SgIntegerDivideOp*);
    virtual void visit(SgIntVal*);
    virtual void visit(SgIOItemExpression*);
    virtual void visit(SgIorAssignOp*);
    virtual void visit(SgIsNotOp*);
    virtual void visit(SgIsOp*);
    virtual void visit(SgJavaInstanceOfOp*);
    virtual void visit(SgJavaMarkerAnnotation*);
    virtual void visit(SgJavaNormalAnnotation*);
    virtual void visit(SgJavaSingleMemberAnnotation*);
    virtual void visit(SgJavaTypeExpression*);
    virtual void visit(SgJavaUnsignedRshiftAssignOp*);
    virtual void visit(SgJavaUnsignedRshiftOp*);
    virtual void visit(SgJovialPresetPositionExp*);
    virtual void visit(SgJovialTablePresetExp*);
    virtual void visit(SgKeyDatumPair*);
    virtual void visit(SgLabelRefExp*);
    virtual void visit(SgLambdaExp*);
    virtual void visit(SgLambdaRefExp*);
    virtual void visit(SgLeftDivideOp*);
    virtual void visit(SgLessOrEqualOp*);
    virtual void visit(SgLessThanOp*);
    virtual void visit(SgListComprehension*);
    virtual void visit(SgListExp*);
    virtual void visit(SgLongDoubleVal*);
    virtual void visit(SgLongIntVal*);
    virtual void visit(SgLongLongIntVal*);
    virtual void visit(SgLshiftAssignOp*);
    virtual void visit(SgLshiftOp*);
    virtual void visit(SgMagicColonExp*);
    virtual void visit(SgMatrixExp*);
    virtual void visit(SgMatrixTransposeOp*);
    virtual void visit(SgMemberFunctionRefExp*);
    virtual void visit(SgMembershipOp*);
    virtual void visit(SgMinusAssignOp*);
    virtual void visit(SgMinusMinusOp*);
    virtual void visit(SgMinusOp*);
    virtual void visit(SgModAssignOp*);
    virtual void visit(SgModOp*);
    virtual void visit(SgMultAssignOp*);
    virtual void visit(SgMultiplyOp*);
    virtual void visit(SgNaryBooleanOp*);
    virtual void visit(SgNaryComparisonOp*);
    virtual void visit(SgNewExp*);
    virtual void visit(SgNoexceptOp*);
    virtual void visit(SgNonMembershipOp*);
    virtual void visit(SgNonrealRefExp*);
    virtual void visit(SgNotOp*);
    virtual void visit(SgNotEqualOp*);
    virtual void visit(SgNullExpression*);
    virtual void visit(SgNullptrValExp*);
    virtual void visit(SgOrOp*);
    virtual void visit(SgPlusAssignOp*);
    virtual void visit(SgPlusPlusOp*);
    virtual void visit(SgPntrArrRefExp*);
    virtual void visit(SgPointerAssignOp*);
    virtual void visit(SgPointerDerefExp*);
    virtual void visit(SgPowerOp*);
    virtual void visit(SgPseudoDestructorRefExp*);
    virtual void visit(SgRangeExp*);
    virtual void visit(SgRealPartOp*);
    virtual void visit(SgRefExp*);
    virtual void visit(SgRemOp*);
    virtual void visit(SgReplicationOp*);
    virtual void visit(SgRshiftAssignOp*);
    virtual void visit(SgRshiftOp*);
    virtual void visit(SgScopeOp*);
    virtual void visit(SgSetComprehension*);
    virtual void visit(SgShortVal*);
    virtual void visit(SgSizeOfOp*);
    virtual void visit(SgSpaceshipOp*);
    virtual void visit(SgStatementExpression*);
    virtual void visit(SgStringConversion*);
    virtual void visit(SgStringVal*);
    virtual void visit(SgSubscriptExpression*);
    virtual void visit(SgSubtractOp*);
    virtual void visit(SgSuperExp*);
    virtual void visit(SgTemplateFunctionRefExp*);
    virtual void visit(SgTemplateMemberFunctionRefExp*);
    virtual void visit(SgTemplateParameterVal*);
    virtual void visit(SgThisExp*);
    virtual void visit(SgThrowOp*);
    virtual void visit(SgTupleExp*);
    virtual void visit(SgTypeExpression*);
    virtual void visit(SgTypeIdOp*);
    virtual void visit(SgTypeTraitBuiltinOperator*);
    virtual void visit(SgUnaryAddOp*);
    virtual void visit(SgUnknownArrayOrFunctionReference*);
    virtual void visit(SgSignedCharVal*);
    virtual void visit(SgUnsignedCharVal*);
    virtual void visit(SgUnsignedIntVal*);
    virtual void visit(SgUnsignedLongLongIntVal*);
    virtual void visit(SgUnsignedLongVal*);
    virtual void visit(SgUnsignedShortVal*);
    virtual void visit(SgUpcBlocksizeofExpression*);
    virtual void visit(SgUpcElemsizeofExpression*);
    virtual void visit(SgUpcLocalsizeofExpression*);
    virtual void visit(SgUpcMythread*);
    virtual void visit(SgUpcThreads*);
    virtual void visit(SgUserDefinedBinaryOp*);
    virtual void visit(SgUserDefinedUnaryOp*);
    virtual void visit(SgVarArgCopyOp*);
    virtual void visit(SgVarArgEndOp*);
    virtual void visit(SgVarArgOp*);
    virtual void visit(SgVarArgStartOneOperandOp*);
    virtual void visit(SgVarArgStartOp*);
    virtual void visit(SgVariantExpression*);
    virtual void visit(SgVarRefExp*);
    virtual void visit(SgVoidVal*);
    virtual void visit(SgWcharVal*);
    virtual void visit(SgXorAssignOp*);
    virtual void visit(SgYieldExpression*);
    virtual void visit(SgCompoundAssignOp*);
    virtual void visit(SgElementwiseOp*);
    virtual void visit(SgBinaryOp*);
    virtual void visit(SgFunctionCallExp*);
    virtual void visit(SgCallExpression*);
    virtual void visit(SgExprListExp*);
    virtual void visit(SgInitializer*);
    virtual void visit(SgJavaAnnotation*);
    virtual void visit(SgNaryOp*);
    virtual void visit(SgUnaryOp*);
    virtual void visit(SgValueExp*);
    virtual void visit(SgScopedRefExp*);
    virtual void visit(SgTypeRefExp*);
    virtual void visit(SgReferenceExp*);
    virtual void visit(SgExpression*);
    virtual void visit(SgTemplateVariableSymbol*);
    virtual void visit(SgVariableSymbol*);
    virtual void visit(SgFunctionTypeSymbol*);
    virtual void visit(SgTemplateClassSymbol*);
    virtual void visit(SgClassSymbol*);
    virtual void visit(SgTemplateSymbol*);
    virtual void visit(SgEnumSymbol*);
    virtual void visit(SgEnumFieldSymbol*);
    virtual void visit(SgTemplateTypedefSymbol*);
    virtual void visit(SgTypedefSymbol*);
    virtual void visit(SgTemplateFunctionSymbol*);
    virtual void visit(SgTemplateMemberFunctionSymbol*);
    virtual void visit(SgLabelSymbol*);
    virtual void visit(SgJavaLabelSymbol*);
    virtual void visit(SgDefaultSymbol*);
    virtual void visit(SgNamespaceSymbol*);
    virtual void visit(SgIntrinsicSymbol*);
    virtual void visit(SgModuleSymbol*);
    virtual void visit(SgInterfaceSymbol*);
    virtual void visit(SgCommonSymbol*);
    virtual void visit(SgRenameSymbol*);
    virtual void visit(SgAdaInheritedFunctionSymbol*);
    virtual void visit(SgMemberFunctionSymbol*);
    virtual void visit(SgFunctionSymbol*);
    virtual void visit(SgTypeSymbol*);
    virtual void visit(SgAsmBinaryAddressSymbol*);
    virtual void visit(SgAsmBinaryDataSymbol*);
    virtual void visit(SgAliasSymbol*);
    virtual void visit(SgNonrealSymbol*);
    virtual void visit(SgAdaPackageSymbol*);
    virtual void visit(SgAdaTaskSymbol*);
    virtual void visit(SgAdaProtectedSymbol*);
    virtual void visit(SgAdaGenericSymbol*);
    virtual void visit(SgAdaGenericInstanceSymbol*);
    virtual void visit(SgAdaFormalPackageSymbol*);
    virtual void visit(SgAdaRenamingSymbol*);
    virtual void visit(SgSymbol*);
    virtual void visit(SgAsmX86Instruction*);
    virtual void visit(SgAsmVoidType*);
    virtual void visit(SgAsmVectorType*);
    virtual void visit(SgAsmUserInstruction*);
    virtual void visit(SgAsmUnaryUnsignedExtend*);
    virtual void visit(SgAsmUnaryTruncate*);
    virtual void visit(SgAsmUnarySignedExtend*);
    virtual void visit(SgAsmUnaryRrx*);
    virtual void visit(SgAsmUnaryPlus*);
    virtual void visit(SgAsmUnaryMinus*);
    virtual void visit(SgAsmUnaryExpression*);
    virtual void visit(SgAsmSynthesizedFieldDeclaration*);
    virtual void visit(SgAsmSynthesizedDataStructureDeclaration*);
    virtual void visit(SgAsmStringStorage*);
    virtual void visit(SgAsmStoredString*);
    virtual void visit(SgAsmStaticData*);
    virtual void visit(SgAsmStackExpression*);
    virtual void visit(SgAsmRiscOperation*);
    virtual void visit(SgAsmRegisterNames*);
    virtual void visit(SgAsmPowerpcInstruction*);
    virtual void visit(SgAsmPointerType*);
    virtual void visit(SgAsmPEStringSection*);
    virtual void visit(SgAsmPESectionTable*);
    virtual void visit(SgAsmPESectionTableEntry*);
    virtual void visit(SgAsmPERVASizePairList*);
    virtual void visit(SgAsmPERVASizePair*);
    virtual void visit(SgAsmPEImportSection*);
    virtual void visit(SgAsmPEImportItemList*);
    virtual void visit(SgAsmPEImportItem*);
    virtual void visit(SgAsmPEImportDirectoryList*);
    virtual void visit(SgAsmPEImportDirectory*);
    virtual void visit(SgAsmPEFileHeader*);
    virtual void visit(SgAsmPEExportSection*);
    virtual void visit(SgAsmPESection*);
    virtual void visit(SgAsmPEExportEntryList*);
    virtual void visit(SgAsmPEExportEntry*);
    virtual void visit(SgAsmPEExportDirectory*);
    virtual void visit(SgAsmOperandList*);
    virtual void visit(SgAsmNullInstruction*);
    virtual void visit(SgAsmNEStringTable*);
    virtual void visit(SgAsmNESectionTable*);
    virtual void visit(SgAsmNESectionTableEntry*);
    virtual void visit(SgAsmNESection*);
    virtual void visit(SgAsmNERelocTable*);
    virtual void visit(SgAsmNERelocEntry*);
    virtual void visit(SgAsmNENameTable*);
    virtual void visit(SgAsmNEModuleTable*);
    virtual void visit(SgAsmNEFileHeader*);
    virtual void visit(SgAsmNEEntryTable*);
    virtual void visit(SgAsmNEEntryPoint*);
    virtual void visit(SgAsmMipsInstruction*);
    virtual void visit(SgAsmMemoryReferenceExpression*);
    virtual void visit(SgAsmM68kInstruction*);
    virtual void visit(SgAsmLESectionTable*);
    virtual void visit(SgAsmLESectionTableEntry*);
    virtual void visit(SgAsmLESection*);
    virtual void visit(SgAsmLERelocTable*);
    virtual void visit(SgAsmLEPageTable*);
    virtual void visit(SgAsmLEPageTableEntry*);
    virtual void visit(SgAsmLENameTable*);
    virtual void visit(SgAsmLEFileHeader*);
    virtual void visit(SgAsmLEEntryTable*);
    virtual void visit(SgAsmLEEntryPoint*);
    virtual void visit(SgAsmJvmSynthetic*);
    virtual void visit(SgAsmJvmStackMapVerificationType*);
    virtual void visit(SgAsmJvmStackMapTable*);
    virtual void visit(SgAsmJvmStackMapFrame*);
    virtual void visit(SgAsmJvmSourceFile*);
    virtual void visit(SgAsmJvmSignature*);
    virtual void visit(SgAsmJvmNestMembers*);
    virtual void visit(SgAsmJvmNestHost*);
    virtual void visit(SgAsmJvmModuleMainClass*);
    virtual void visit(SgAsmJvmMethodTable*);
    virtual void visit(SgAsmJvmMethodParameters*);
    virtual void visit(SgAsmJvmMethodParametersEntry*);
    virtual void visit(SgAsmJvmMethod*);
    virtual void visit(SgAsmJvmLocalVariableTypeTable*);
    virtual void visit(SgAsmJvmLocalVariableTypeEntry*);
    virtual void visit(SgAsmJvmLocalVariableTable*);
    virtual void visit(SgAsmJvmLocalVariableEntry*);
    virtual void visit(SgAsmJvmLineNumberTable*);
    virtual void visit(SgAsmJvmLineNumberEntry*);
    virtual void visit(SgAsmJvmInstruction*);
    virtual void visit(SgAsmJvmInnerClasses*);
    virtual void visit(SgAsmJvmInnerClassesEntry*);
    virtual void visit(SgAsmJvmFileHeader*);
    virtual void visit(SgAsmJvmFieldTable*);
    virtual void visit(SgAsmJvmField*);
    virtual void visit(SgAsmJvmExceptionTable*);
    virtual void visit(SgAsmJvmExceptions*);
    virtual void visit(SgAsmJvmExceptionHandler*);
    virtual void visit(SgAsmJvmEnclosingMethod*);
    virtual void visit(SgAsmJvmDeprecated*);
    virtual void visit(SgAsmJvmConstantValue*);
    virtual void visit(SgAsmJvmConstantPool*);
    virtual void visit(SgAsmJvmConstantPoolEntry*);
    virtual void visit(SgAsmJvmCodeAttribute*);
    virtual void visit(SgAsmJvmClass*);
    virtual void visit(SgAsmJvmBootstrapMethods*);
    virtual void visit(SgAsmJvmBootstrapMethod*);
    virtual void visit(SgAsmJvmAttributeTable*);
    virtual void visit(SgAsmJvmAttribute*);
    virtual void visit(SgAsmJvmNode*);
    virtual void visit(SgAsmInterpretationList*);
    virtual void visit(SgAsmInterpretation*);
    virtual void visit(SgAsmIntegerValueExpression*);
    virtual void visit(SgAsmIntegerType*);
    virtual void visit(SgAsmInstructionList*);
    virtual void visit(SgAsmIndirectRegisterExpression*);
    virtual void visit(SgAsmGenericSymbolList*);
    virtual void visit(SgAsmGenericSectionList*);
    virtual void visit(SgAsmGenericHeaderList*);
    virtual void visit(SgAsmGenericFormat*);
    virtual void visit(SgAsmGenericFileList*);
    virtual void visit(SgAsmGenericFile*);
    virtual void visit(SgAsmGenericDLLList*);
    virtual void visit(SgAsmGenericDLL*);
    virtual void visit(SgAsmFunction*);
    virtual void visit(SgAsmSynthesizedDeclaration*);
    virtual void visit(SgAsmFloatValueExpression*);
    virtual void visit(SgAsmFloatType*);
    virtual void visit(SgAsmScalarType*);
    virtual void visit(SgAsmType*);
    virtual void visit(SgAsmExprListExp*);
    virtual void visit(SgAsmElfSymverSection*);
    virtual void visit(SgAsmElfSymverNeededSection*);
    virtual void visit(SgAsmElfSymverNeededEntryList*);
    virtual void visit(SgAsmElfSymverNeededEntry*);
    virtual void visit(SgAsmElfSymverNeededAuxList*);
    virtual void visit(SgAsmElfSymverNeededAux*);
    virtual void visit(SgAsmElfSymverEntryList*);
    virtual void visit(SgAsmElfSymverEntry*);
    virtual void visit(SgAsmElfSymverDefinedSection*);
    virtual void visit(SgAsmElfSymverDefinedEntryList*);
    virtual void visit(SgAsmElfSymverDefinedEntry*);
    virtual void visit(SgAsmElfSymverDefinedAuxList*);
    virtual void visit(SgAsmElfSymverDefinedAux*);
    virtual void visit(SgAsmElfSymbolSection*);
    virtual void visit(SgAsmElfSymbolList*);
    virtual void visit(SgAsmElfSymbol*);
    virtual void visit(SgAsmElfStrtab*);
    virtual void visit(SgAsmElfStringSection*);
    virtual void visit(SgAsmElfSegmentTable*);
    virtual void visit(SgAsmElfSegmentTableEntryList*);
    virtual void visit(SgAsmElfSegmentTableEntry*);
    virtual void visit(SgAsmElfSectionTable*);
    virtual void visit(SgAsmElfSectionTableEntry*);
    virtual void visit(SgAsmElfRelocSection*);
    virtual void visit(SgAsmElfRelocEntryList*);
    virtual void visit(SgAsmElfRelocEntry*);
    virtual void visit(SgAsmElfNoteSection*);
    virtual void visit(SgAsmElfNoteEntryList*);
    virtual void visit(SgAsmElfNoteEntry*);
    virtual void visit(SgAsmElfFileHeader*);
    virtual void visit(SgAsmElfEHFrameSection*);
    virtual void visit(SgAsmElfEHFrameEntryFDList*);
    virtual void visit(SgAsmElfEHFrameEntryFD*);
    virtual void visit(SgAsmElfEHFrameEntryCIList*);
    virtual void visit(SgAsmElfEHFrameEntryCI*);
    virtual void visit(SgAsmElfDynamicSection*);
    virtual void visit(SgAsmElfSection*);
    virtual void visit(SgAsmElfDynamicEntryList*);
    virtual void visit(SgAsmElfDynamicEntry*);
    virtual void visit(SgAsmDwarfWithStmt*);
    virtual void visit(SgAsmDwarfVolatileType*);
    virtual void visit(SgAsmDwarfVariantPart*);
    virtual void visit(SgAsmDwarfVariant*);
    virtual void visit(SgAsmDwarfVariable*);
    virtual void visit(SgAsmDwarfUpcStrictType*);
    virtual void visit(SgAsmDwarfUpcSharedType*);
    virtual void visit(SgAsmDwarfUpcRelaxedType*);
    virtual void visit(SgAsmDwarfUnspecifiedType*);
    virtual void visit(SgAsmDwarfUnspecifiedParameters*);
    virtual void visit(SgAsmDwarfUnknownConstruct*);
    virtual void visit(SgAsmDwarfUnionType*);
    virtual void visit(SgAsmDwarfTypedef*);
    virtual void visit(SgAsmDwarfTryBlock*);
    virtual void visit(SgAsmDwarfThrownType*);
    virtual void visit(SgAsmDwarfTemplateValueParameter*);
    virtual void visit(SgAsmDwarfTemplateTypeParameter*);
    virtual void visit(SgAsmDwarfSubroutineType*);
    virtual void visit(SgAsmDwarfSubrangeType*);
    virtual void visit(SgAsmDwarfSubprogram*);
    virtual void visit(SgAsmDwarfStructureType*);
    virtual void visit(SgAsmDwarfStringType*);
    virtual void visit(SgAsmDwarfSharedType*);
    virtual void visit(SgAsmDwarfSetType*);
    virtual void visit(SgAsmDwarfRestrictType*);
    virtual void visit(SgAsmDwarfReferenceType*);
    virtual void visit(SgAsmDwarfPtrToMemberType*);
    virtual void visit(SgAsmDwarfPointerType*);
    virtual void visit(SgAsmDwarfPartialUnit*);
    virtual void visit(SgAsmDwarfPackedType*);
    virtual void visit(SgAsmDwarfNamespace*);
    virtual void visit(SgAsmDwarfNamelistItem*);
    virtual void visit(SgAsmDwarfNamelist*);
    virtual void visit(SgAsmDwarfMutableType*);
    virtual void visit(SgAsmDwarfModule*);
    virtual void visit(SgAsmDwarfMember*);
    virtual void visit(SgAsmDwarfMacroList*);
    virtual void visit(SgAsmDwarfMacro*);
    virtual void visit(SgAsmDwarfLineList*);
    virtual void visit(SgAsmDwarfLine*);
    virtual void visit(SgAsmDwarfLexicalBlock*);
    virtual void visit(SgAsmDwarfLabel*);
    virtual void visit(SgAsmDwarfInterfaceType*);
    virtual void visit(SgAsmDwarfInlinedSubroutine*);
    virtual void visit(SgAsmDwarfInheritance*);
    virtual void visit(SgAsmDwarfImportedUnit*);
    virtual void visit(SgAsmDwarfImportedModule*);
    virtual void visit(SgAsmDwarfImportedDeclaration*);
    virtual void visit(SgAsmDwarfFunctionTemplate*);
    virtual void visit(SgAsmDwarfFriend*);
    virtual void visit(SgAsmDwarfFormatLabel*);
    virtual void visit(SgAsmDwarfFormalParameter*);
    virtual void visit(SgAsmDwarfFileType*);
    virtual void visit(SgAsmDwarfEnumerator*);
    virtual void visit(SgAsmDwarfEnumerationType*);
    virtual void visit(SgAsmDwarfEntryPoint*);
    virtual void visit(SgAsmDwarfDwarfProcedure*);
    virtual void visit(SgAsmDwarfConstType*);
    virtual void visit(SgAsmDwarfConstructList*);
    virtual void visit(SgAsmDwarfConstant*);
    virtual void visit(SgAsmDwarfCondition*);
    virtual void visit(SgAsmDwarfCompilationUnitList*);
    virtual void visit(SgAsmDwarfCompilationUnit*);
    virtual void visit(SgAsmDwarfCommonInclusion*);
    virtual void visit(SgAsmDwarfCommonBlock*);
    virtual void visit(SgAsmDwarfClassType*);
    virtual void visit(SgAsmDwarfClassTemplate*);
    virtual void visit(SgAsmDwarfCatchBlock*);
    virtual void visit(SgAsmDwarfBaseType*);
    virtual void visit(SgAsmDwarfArrayType*);
    virtual void visit(SgAsmDwarfAccessDeclaration*);
    virtual void visit(SgAsmDwarfConstruct*);
    virtual void visit(SgAsmDwarfInformation*);
    virtual void visit(SgAsmDOSFileHeader*);
    virtual void visit(SgAsmGenericHeader*);
    virtual void visit(SgAsmDOSExtendedHeader*);
    virtual void visit(SgAsmDirectRegisterExpression*);
    virtual void visit(SgAsmRegisterReferenceExpression*);
    virtual void visit(SgAsmControlFlagsExpression*);
    virtual void visit(SgAsmConstantExpression*);
    virtual void visit(SgAsmValueExpression*);
    virtual void visit(SgAsmCommonSubExpression*);
    virtual void visit(SgAsmCoffSymbolTable*);
    virtual void visit(SgAsmCoffSymbolList*);
    virtual void visit(SgAsmCoffSymbol*);
    virtual void visit(SgAsmGenericSymbol*);
    virtual void visit(SgAsmCoffStrtab*);
    virtual void visit(SgAsmGenericStrtab*);
    virtual void visit(SgAsmCliHeader*);
    virtual void visit(SgAsmGenericSection*);
    virtual void visit(SgAsmCilUint8Heap*);
    virtual void visit(SgAsmCilUint32Heap*);
    virtual void visit(SgAsmCilTypeSpecTable*);
    virtual void visit(SgAsmCilTypeSpec*);
    virtual void visit(SgAsmCilTypeRefTable*);
    virtual void visit(SgAsmCilTypeRef*);
    virtual void visit(SgAsmCilTypeDefTable*);
    virtual void visit(SgAsmCilTypeDef*);
    virtual void visit(SgAsmCilStandAloneSigTable*);
    virtual void visit(SgAsmCilStandAloneSig*);
    virtual void visit(SgAsmCilPropertyTable*);
    virtual void visit(SgAsmCilPropertyMapTable*);
    virtual void visit(SgAsmCilPropertyMap*);
    virtual void visit(SgAsmCilProperty*);
    virtual void visit(SgAsmCilParamTable*);
    virtual void visit(SgAsmCilParam*);
    virtual void visit(SgAsmCilNestedClassTable*);
    virtual void visit(SgAsmCilNestedClass*);
    virtual void visit(SgAsmCilModuleTable*);
    virtual void visit(SgAsmCilModuleRefTable*);
    virtual void visit(SgAsmCilModuleRef*);
    virtual void visit(SgAsmCilModule*);
    virtual void visit(SgAsmCilMethodSpecTable*);
    virtual void visit(SgAsmCilMethodSpec*);
    virtual void visit(SgAsmCilMethodSemanticsTable*);
    virtual void visit(SgAsmCilMethodSemantics*);
    virtual void visit(SgAsmCilMethodImplTable*);
    virtual void visit(SgAsmCilMethodImpl*);
    virtual void visit(SgAsmCilMethodDefTable*);
    virtual void visit(SgAsmCilMethodDef*);
    virtual void visit(SgAsmCilMethodData*);
    virtual void visit(SgAsmCilMetadataRoot*);
    virtual void visit(SgAsmCilMetadataHeap*);
    virtual void visit(SgAsmCilMemberRefTable*);
    virtual void visit(SgAsmCilMemberRef*);
    virtual void visit(SgAsmCilManifestResourceTable*);
    virtual void visit(SgAsmCilManifestResource*);
    virtual void visit(SgAsmCilInterfaceImplTable*);
    virtual void visit(SgAsmCilInterfaceImpl*);
    virtual void visit(SgAsmCilInstruction*);
    virtual void visit(SgAsmCilImplMapTable*);
    virtual void visit(SgAsmCilImplMap*);
    virtual void visit(SgAsmCilGenericParamTable*);
    virtual void visit(SgAsmCilGenericParam*);
    virtual void visit(SgAsmCilGenericParamConstraintTable*);
    virtual void visit(SgAsmCilGenericParamConstraint*);
    virtual void visit(SgAsmCilFileTable*);
    virtual void visit(SgAsmCilFile*);
    virtual void visit(SgAsmCilFieldTable*);
    virtual void visit(SgAsmCilFieldRVATable*);
    virtual void visit(SgAsmCilFieldRVA*);
    virtual void visit(SgAsmCilFieldMarshalTable*);
    virtual void visit(SgAsmCilFieldMarshal*);
    virtual void visit(SgAsmCilFieldLayoutTable*);
    virtual void visit(SgAsmCilFieldLayout*);
    virtual void visit(SgAsmCilField*);
    virtual void visit(SgAsmCilExportedTypeTable*);
    virtual void visit(SgAsmCilExportedType*);
    virtual void visit(SgAsmCilExceptionData*);
    virtual void visit(SgAsmCilEventTable*);
    virtual void visit(SgAsmCilEventMapTable*);
    virtual void visit(SgAsmCilEventMap*);
    virtual void visit(SgAsmCilEvent*);
    virtual void visit(SgAsmCilErrorHeap*);
    virtual void visit(SgAsmCilDeclSecurityTable*);
    virtual void visit(SgAsmCilDeclSecurity*);
    virtual void visit(SgAsmCilDataStream*);
    virtual void visit(SgAsmCilCustomAttributeTable*);
    virtual void visit(SgAsmCilCustomAttribute*);
    virtual void visit(SgAsmCilConstantTable*);
    virtual void visit(SgAsmCilConstant*);
    virtual void visit(SgAsmCilClassLayoutTable*);
    virtual void visit(SgAsmCilClassLayout*);
    virtual void visit(SgAsmCilAssemblyTable*);
    virtual void visit(SgAsmCilAssemblyRefTable*);
    virtual void visit(SgAsmCilAssemblyRefProcessorTable*);
    virtual void visit(SgAsmCilAssemblyRefProcessor*);
    virtual void visit(SgAsmCilAssemblyRefOSTable*);
    virtual void visit(SgAsmCilAssemblyRefOS*);
    virtual void visit(SgAsmCilAssemblyRef*);
    virtual void visit(SgAsmCilAssemblyProcessorTable*);
    virtual void visit(SgAsmCilAssemblyProcessor*);
    virtual void visit(SgAsmCilAssemblyOSTable*);
    virtual void visit(SgAsmCilAssemblyOS*);
    virtual void visit(SgAsmCilAssembly*);
    virtual void visit(SgAsmCilMetadata*);
    virtual void visit(SgAsmCilNode*);
    virtual void visit(SgAsmByteOrder*);
    virtual void visit(SgAsmBlock*);
    virtual void visit(SgAsmBinarySubtract*);
    virtual void visit(SgAsmBinaryRor*);
    virtual void visit(SgAsmBinaryPreupdate*);
    virtual void visit(SgAsmBinaryPostupdate*);
    virtual void visit(SgAsmBinaryMultiply*);
    virtual void visit(SgAsmBinaryMsl*);
    virtual void visit(SgAsmBinaryMod*);
    virtual void visit(SgAsmBinaryLsr*);
    virtual void visit(SgAsmBinaryLsl*);
    virtual void visit(SgAsmBinaryDivide*);
    virtual void visit(SgAsmBinaryConcat*);
    virtual void visit(SgAsmBinaryAsr*);
    virtual void visit(SgAsmBinaryAdd*);
    virtual void visit(SgAsmBinaryExpression*);
    virtual void visit(SgAsmBasicString*);
    virtual void visit(SgAsmGenericString*);
    virtual void visit(SgAsmExecutableFileFormat*);
    virtual void visit(SgAsmInstruction*);
    virtual void visit(SgAsmStatement*);
    virtual void visit(SgAsmAarch32Coprocessor*);
    virtual void visit(SgAsmExpression*);
    virtual void visit(SgAsmNode*);
    virtual void visit(SgCommonBlockObject*);
    virtual void visit(SgInitializedName*);
    virtual void visit(SgLambdaCapture*);
    virtual void visit(SgLambdaCaptureList*);
    virtual void visit(SgJavaMemberValuePair*);
    virtual void visit(SgOmpOrderedClause*);
    virtual void visit(SgOmpNowaitClause*);
    virtual void visit(SgOmpBeginClause*);
    virtual void visit(SgOmpEndClause*);
    virtual void visit(SgOmpUntiedClause*);
    virtual void visit(SgOmpMergeableClause*);
    virtual void visit(SgOmpDefaultClause*);
    virtual void visit(SgOmpAtomicClause*);
    virtual void visit(SgOmpProcBindClause*);
    virtual void visit(SgOmpInbranchClause*);
    virtual void visit(SgOmpNotinbranchClause*);
    virtual void visit(SgOmpCollapseClause*);
    virtual void visit(SgOmpIfClause*);
    virtual void visit(SgOmpFinalClause*);
    virtual void visit(SgOmpPriorityClause*);
    virtual void visit(SgOmpNumThreadsClause*);
    virtual void visit(SgOmpDeviceClause*);
    virtual void visit(SgOmpSafelenClause*);
    virtual void visit(SgOmpSimdlenClause*);
    virtual void visit(SgOmpExpressionClause*);
    virtual void visit(SgOmpCopyprivateClause*);
    virtual void visit(SgOmpPrivateClause*);
    virtual void visit(SgOmpFirstprivateClause*);
    virtual void visit(SgOmpSharedClause*);
    virtual void visit(SgOmpCopyinClause*);
    virtual void visit(SgOmpLastprivateClause*);
    virtual void visit(SgOmpReductionClause*);
    virtual void visit(SgOmpDependClause*);
    virtual void visit(SgOmpMapClause*);
    virtual void visit(SgOmpLinearClause*);
    virtual void visit(SgOmpUniformClause*);
    virtual void visit(SgOmpAlignedClause*);
    virtual void visit(SgOmpVariablesClause*);
    virtual void visit(SgOmpScheduleClause*);
    virtual void visit(SgOmpClause*);
    virtual void visit(SgRenamePair*);
    virtual void visit(SgInterfaceBody*);
    virtual void visit(SgHeaderFileBody*);
    virtual void visit(SgAdaRangeConstraint*);
    virtual void visit(SgAdaIndexConstraint*);
    virtual void visit(SgAdaDigitsConstraint*);
    virtual void visit(SgAdaDeltaConstraint*);
    virtual void visit(SgAdaDiscriminantConstraint*);
    virtual void visit(SgAdaNullConstraint*);
    virtual void visit(SgAdaTypeConstraint*);
    virtual void visit(SgLocatedNodeSupport*);
    virtual void visit(SgToken*);
    virtual void visit(SgLocatedNode*);
    virtual void visit(SgNode*);
};

class ROSE_VisitorPatternDefaultBase: public ROSE_VisitorPattern {
public:
    void visit(SgJovialBitVal*);
    void visit(SgName*);
    void visit(SgSymbolTable*);
    void visit(SgPragma*);
    void visit(SgModifierNodes*);
    void visit(SgConstVolatileModifier*);
    void visit(SgStorageModifier*);
    void visit(SgAccessModifier*);
    void visit(SgFunctionModifier*);
    void visit(SgUPC_AccessModifier*);
    void visit(SgLinkageModifier*);
    void visit(SgSpecialFunctionModifier*);
    void visit(SgTypeModifier*);
    void visit(SgElaboratedTypeModifier*);
    void visit(SgBaseClassModifier*);
    void visit(SgDeclarationModifier*);
    void visit(SgStructureModifier*);
    void visit(SgOpenclAccessModeModifier*);
    void visit(SgModifier*);
    void visit(Sg_File_Info*);
    void visit(SgSourceFile*);
    void visit(SgUnknownFile*);
    void visit(SgJvmComposite*);
    void visit(SgBinaryComposite*);
    void visit(SgFile*);
    void visit(SgFileList*);
    void visit(SgDirectory*);
    void visit(SgDirectoryList*);
    void visit(SgProject*);
    void visit(SgOptions*);
    void visit(SgUnparse_Info*);
    void visit(SgIncludeFile*);
    void visit(SgFuncDecl_attr*);
    void visit(SgClassDecl_attr*);
    void visit(SgTypedefSeq*);
    void visit(SgFunctionParameterTypeList*);
    void visit(SgTemplateParameter*);
    void visit(SgTemplateArgument*);
    void visit(SgTemplateParameterList*);
    void visit(SgTemplateArgumentList*);
    void visit(SgBitAttribute*);
    void visit(SgAttribute*);
    void visit(SgExpBaseClass*);
    void visit(SgNonrealBaseClass*);
    void visit(SgBaseClass*);
    void visit(SgUndirectedGraphEdge*);
    void visit(SgDirectedGraphEdge*);
    void visit(SgGraphNode*);
    void visit(SgGraphEdge*);
    void visit(SgStringKeyedBidirectionalGraph*);
    void visit(SgIntKeyedBidirectionalGraph*);
    void visit(SgBidirectionalGraph*);
    void visit(SgIncidenceDirectedGraph*);
    void visit(SgIncidenceUndirectedGraph*);
    void visit(SgGraph*);
    void visit(SgGraphNodeList*);
    void visit(SgGraphEdgeList*);
    void visit(SgQualifiedName*);
    void visit(SgNameGroup*);
    void visit(SgDimensionObject*);
    void visit(SgDataStatementGroup*);
    void visit(SgDataStatementObject*);
    void visit(SgDataStatementValue*);
    void visit(SgFormatItem*);
    void visit(SgFormatItemList*);
    void visit(SgTypeTable*);
    void visit(SgJavaImportStatementList*);
    void visit(SgJavaClassDeclarationList*);
    void visit(SgHeaderFileReport*);
    void visit(SgSupport*);
    void visit(SgTypeUnknown*);
    void visit(SgTypeChar*);
    void visit(SgTypeSignedChar*);
    void visit(SgTypeUnsignedChar*);
    void visit(SgTypeShort*);
    void visit(SgTypeSignedShort*);
    void visit(SgTypeUnsignedShort*);
    void visit(SgTypeInt*);
    void visit(SgTypeSignedInt*);
    void visit(SgTypeUnsignedInt*);
    void visit(SgTypeLong*);
    void visit(SgTypeSignedLong*);
    void visit(SgTypeUnsignedLong*);
    void visit(SgTypeVoid*);
    void visit(SgTypeGlobalVoid*);
    void visit(SgTypeWchar*);
    void visit(SgTypeFloat*);
    void visit(SgTypeDouble*);
    void visit(SgTypeLongLong*);
    void visit(SgTypeSignedLongLong*);
    void visit(SgTypeUnsignedLongLong*);
    void visit(SgTypeLongDouble*);
    void visit(SgTypeFloat80*);
    void visit(SgTypeFloat128*);
    void visit(SgTypeString*);
    void visit(SgTypeBool*);
    void visit(SgTypeFixed*);
    void visit(SgTypeMatrix*);
    void visit(SgTypeTuple*);
    void visit(SgTypeNullptr*);
    void visit(SgTypeComplex*);
    void visit(SgTypeImaginary*);
    void visit(SgTypeDefault*);
    void visit(SgPointerMemberType*);
    void visit(SgReferenceType*);
    void visit(SgRvalueReferenceType*);
    void visit(SgDeclType*);
    void visit(SgTypeOfType*);
    void visit(SgTypeCAFTeam*);
    void visit(SgTypeUnsigned128bitInteger*);
    void visit(SgTypeSigned128bitInteger*);
    void visit(SgTypeLabel*);
    void visit(SgJavaParameterizedType*);
    void visit(SgJavaQualifiedType*);
    void visit(SgJavaWildcardType*);
    void visit(SgJavaUnionType*);
    void visit(SgJavaParameterType*);
    void visit(SgJovialTableType*);
    void visit(SgTemplateType*);
    void visit(SgEnumType*);
    void visit(SgTypedefType*);
    void visit(SgNonrealType*);
    void visit(SgAutoType*);
    void visit(SgModifierType*);
    void visit(SgPartialFunctionModifierType*);
    void visit(SgArrayType*);
    void visit(SgTypeEllipse*);
    void visit(SgAdaAccessType*);
    void visit(SgAdaSubtype*);
    void visit(SgAdaDerivedType*);
    void visit(SgAdaModularType*);
    void visit(SgAdaDiscriminatedType*);
    void visit(SgAdaFormalType*);
    void visit(SgAdaDiscreteType*);
    void visit(SgAdaSubroutineType*);
    void visit(SgRangeType*);
    void visit(SgJovialBitType*);
    void visit(SgTypeCrayPointer*);
    void visit(SgPartialFunctionType*);
    void visit(SgMemberFunctionType*);
    void visit(SgFunctionType*);
    void visit(SgPointerType*);
    void visit(SgAdaTaskType*);
    void visit(SgAdaProtectedType*);
    void visit(SgScopedType*);
    void visit(SgClassType*);
    void visit(SgNamedType*);
    void visit(SgQualifiedNameType*);
    void visit(SgTypeChar16*);
    void visit(SgTypeChar32*);
    void visit(SgType*);
    void visit(SgForStatement*);
    void visit(SgForInitStatement*);
    void visit(SgRangeBasedForStatement*);
    void visit(SgCatchStatementSeq*);
    void visit(SgFunctionParameterList*);
    void visit(SgAdaParameterList*);
    void visit(SgCtorInitializerList*);
    void visit(SgBasicBlock*);
    void visit(SgGlobal*);
    void visit(SgIfStmt*);
    void visit(SgWhileStmt*);
    void visit(SgDoWhileStmt*);
    void visit(SgSwitchStatement*);
    void visit(SgCatchOptionStmt*);
    void visit(SgFunctionParameterScope*);
    void visit(SgDeclarationScope*);
    void visit(SgVariableDefinition*);
    void visit(SgStmtDeclarationStatement*);
    void visit(SgEnumDeclaration*);
    void visit(SgAsmStmt*);
    void visit(SgFunctionTypeTable*);
    void visit(SgExprStatement*);
    void visit(SgLabelStatement*);
    void visit(SgCaseOptionStmt*);
    void visit(SgTryStmt*);
    void visit(SgDefaultOptionStmt*);
    void visit(SgBreakStmt*);
    void visit(SgContinueStmt*);
    void visit(SgReturnStmt*);
    void visit(SgGotoStatement*);
    void visit(SgAdaExitStmt*);
    void visit(SgAdaLoopStmt*);
    void visit(SgAdaDelayStmt*);
    void visit(SgAdaSelectStmt*);
    void visit(SgAdaSelectAlternativeStmt*);
    void visit(SgAdaTerminateStmt*);
    void visit(SgAdaUnscopedBlock*);
    void visit(SgAdaVariantWhenStmt*);
    void visit(SgSpawnStmt*);
    void visit(SgFortranContinueStmt*);
    void visit(SgTemplateTypedefDeclaration*);
    void visit(SgTemplateInstantiationTypedefDeclaration*);
    void visit(SgTypedefDeclaration*);
    void visit(SgNullStatement*);
    void visit(SgVariantStatement*);
    void visit(SgPragmaDeclaration*);
    void visit(SgTemplateClassDeclaration*);
    void visit(SgTemplateMemberFunctionDeclaration*);
    void visit(SgTemplateFunctionDeclaration*);
    void visit(SgTemplateVariableDeclaration*);
    void visit(SgTemplateVariableInstantiation*);
    void visit(SgTemplateDeclaration*);
    void visit(SgVariableDeclaration*);
    void visit(SgTemplateInstantiationDecl*);
    void visit(SgTemplateInstantiationDefn*);
    void visit(SgTemplateInstantiationFunctionDecl*);
    void visit(SgTemplateInstantiationMemberFunctionDecl*);
    void visit(SgNonrealDecl*);
    void visit(SgWithStatement*);
    void visit(SgPythonGlobalStmt*);
    void visit(SgPythonPrintStmt*);
    void visit(SgPassStatement*);
    void visit(SgAssertStmt*);
    void visit(SgExecStatement*);
    void visit(SgProgramHeaderStatement*);
    void visit(SgProcedureHeaderStatement*);
    void visit(SgEntryStatement*);
    void visit(SgFortranNonblockedDo*);
    void visit(SgInterfaceStatement*);
    void visit(SgParameterStatement*);
    void visit(SgCommonBlock*);
    void visit(SgModuleStatement*);
    void visit(SgUseStatement*);
    void visit(SgProcessControlStatement*);
    void visit(SgPrintStatement*);
    void visit(SgReadStatement*);
    void visit(SgWriteStatement*);
    void visit(SgOpenStatement*);
    void visit(SgCloseStatement*);
    void visit(SgInquireStatement*);
    void visit(SgFlushStatement*);
    void visit(SgBackspaceStatement*);
    void visit(SgRewindStatement*);
    void visit(SgEndfileStatement*);
    void visit(SgWaitStatement*);
    void visit(SgCAFWithTeamStatement*);
    void visit(SgFormatStatement*);
    void visit(SgFortranDo*);
    void visit(SgForAllStatement*);
    void visit(SgIOStatement*);
    void visit(SgSyncAllStatement*);
    void visit(SgSyncImagesStatement*);
    void visit(SgSyncMemoryStatement*);
    void visit(SgSyncTeamStatement*);
    void visit(SgLockStatement*);
    void visit(SgUnlockStatement*);
    void visit(SgImageControlStatement*);
    void visit(SgJovialCompoolStatement*);
    void visit(SgJovialDefineDeclaration*);
    void visit(SgJovialDirectiveStatement*);
    void visit(SgJovialLabelDeclaration*);
    void visit(SgJovialOverlayDeclaration*);
    void visit(SgJovialForThenStatement*);
    void visit(SgMatlabForStatement*);
    void visit(SgUpcNotifyStatement*);
    void visit(SgUpcWaitStatement*);
    void visit(SgUpcBarrierStatement*);
    void visit(SgUpcFenceStatement*);
    void visit(SgUpcForAllStatement*);
    void visit(SgOmpParallelStatement*);
    void visit(SgOmpSingleStatement*);
    void visit(SgOmpTaskStatement*);
    void visit(SgOmpForStatement*);
    void visit(SgOmpForSimdStatement*);
    void visit(SgOmpDoStatement*);
    void visit(SgOmpSectionsStatement*);
    void visit(SgOmpAtomicStatement*);
    void visit(SgOmpTargetStatement*);
    void visit(SgOmpTargetDataStatement*);
    void visit(SgOmpSimdStatement*);
    void visit(SgOmpClauseBodyStatement*);
    void visit(SgOmpMasterStatement*);
    void visit(SgOmpSectionStatement*);
    void visit(SgOmpOrderedStatement*);
    void visit(SgOmpWorkshareStatement*);
    void visit(SgOmpCriticalStatement*);
    void visit(SgOmpBodyStatement*);
    void visit(SgJavaThrowStatement*);
    void visit(SgJavaForEachStatement*);
    void visit(SgJavaSynchronizedStatement*);
    void visit(SgJavaLabelStatement*);
    void visit(SgJavaImportStatement*);
    void visit(SgJavaPackageDeclaration*);
    void visit(SgJavaPackageStatement*);
    void visit(SgAsyncStmt*);
    void visit(SgFinishStmt*);
    void visit(SgAtStmt*);
    void visit(SgAtomicStmt*);
    void visit(SgWhenStmt*);
    void visit(SgBlockDataStatement*);
    void visit(SgImplicitStatement*);
    void visit(SgStatementFunctionStatement*);
    void visit(SgWhereStatement*);
    void visit(SgNullifyStatement*);
    void visit(SgEquivalenceStatement*);
    void visit(SgDerivedTypeStatement*);
    void visit(SgJovialTableStatement*);
    void visit(SgAttributeSpecificationStatement*);
    void visit(SgAllocateStatement*);
    void visit(SgDeallocateStatement*);
    void visit(SgContainsStatement*);
    void visit(SgSequenceStatement*);
    void visit(SgElseWhereStatement*);
    void visit(SgArithmeticIfStatement*);
    void visit(SgAssignStatement*);
    void visit(SgComputedGotoStatement*);
    void visit(SgAssignedGotoStatement*);
    void visit(SgNamelistStatement*);
    void visit(SgImportStatement*);
    void visit(SgAssociateStatement*);
    void visit(SgFortranIncludeLine*);
    void visit(SgNamespaceDeclarationStatement*);
    void visit(SgNamespaceAliasDeclarationStatement*);
    void visit(SgNamespaceDefinitionStatement*);
    void visit(SgUsingDeclarationStatement*);
    void visit(SgUsingDirectiveStatement*);
    void visit(SgTemplateInstantiationDirectiveStatement*);
    void visit(SgStaticAssertionDeclaration*);
    void visit(SgTemplateClassDefinition*);
    void visit(SgTemplateFunctionDefinition*);
    void visit(SgClassDeclaration*);
    void visit(SgClassDefinition*);
    void visit(SgFunctionDefinition*);
    void visit(SgAdaAcceptStmt*);
    void visit(SgAdaPackageBody*);
    void visit(SgAdaPackageSpec*);
    void visit(SgAdaTaskBody*);
    void visit(SgAdaTaskSpec*);
    void visit(SgAdaProtectedBody*);
    void visit(SgAdaProtectedSpec*);
    void visit(SgAdaGenericDefn*);
    void visit(SgScopeStatement*);
    void visit(SgMemberFunctionDeclaration*);
    void visit(SgAdaEntryDecl*);
    void visit(SgAdaFunctionRenamingDecl*);
    void visit(SgFunctionDeclaration*);
    void visit(SgIncludeDirectiveStatement*);
    void visit(SgDefineDirectiveStatement*);
    void visit(SgUndefDirectiveStatement*);
    void visit(SgIfdefDirectiveStatement*);
    void visit(SgIfndefDirectiveStatement*);
    void visit(SgIfDirectiveStatement*);
    void visit(SgDeadIfDirectiveStatement*);
    void visit(SgElseDirectiveStatement*);
    void visit(SgElseifDirectiveStatement*);
    void visit(SgEndifDirectiveStatement*);
    void visit(SgLineDirectiveStatement*);
    void visit(SgWarningDirectiveStatement*);
    void visit(SgErrorDirectiveStatement*);
    void visit(SgEmptyDirectiveStatement*);
    void visit(SgIncludeNextDirectiveStatement*);
    void visit(SgIdentDirectiveStatement*);
    void visit(SgLinemarkerDirectiveStatement*);
    void visit(SgC_PreprocessorDirectiveStatement*);
    void visit(SgClinkageStartStatement*);
    void visit(SgClinkageEndStatement*);
    void visit(SgClinkageDeclarationStatement*);
    void visit(SgOmpFlushStatement*);
    void visit(SgOmpDeclareSimdStatement*);
    void visit(SgOmpBarrierStatement*);
    void visit(SgOmpTaskwaitStatement*);
    void visit(SgOmpThreadprivateStatement*);
    void visit(SgMicrosoftAttributeDeclaration*);
    void visit(SgEmptyDeclaration*);
    void visit(SgAdaPackageSpecDecl*);
    void visit(SgAdaPackageBodyDecl*);
    void visit(SgAdaTaskSpecDecl*);
    void visit(SgAdaTaskTypeDecl*);
    void visit(SgAdaTaskBodyDecl*);
    void visit(SgAdaProtectedSpecDecl*);
    void visit(SgAdaProtectedTypeDecl*);
    void visit(SgAdaProtectedBodyDecl*);
    void visit(SgAdaRepresentationClause*);
    void visit(SgAdaEnumRepresentationClause*);
    void visit(SgAdaAttributeClause*);
    void visit(SgAdaComponentClause*);
    void visit(SgAdaRenamingDecl*);
    void visit(SgAdaGenericDecl*);
    void visit(SgAdaGenericInstanceDecl*);
    void visit(SgAdaFormalTypeDecl*);
    void visit(SgAdaFormalPackageDecl*);
    void visit(SgAdaDiscriminatedTypeDecl*);
    void visit(SgAdaVariantDecl*);
    void visit(SgDeclarationStatement*);
    void visit(SgStatement*);
    void visit(SgAbsOp*);
    void visit(SgActualArgumentExpression*);
    void visit(SgAdaAncestorInitializer*);
    void visit(SgAdaAttributeExp*);
    void visit(SgAdaFloatVal*);
    void visit(SgAdaOthersExp*);
    void visit(SgAdaProtectedRefExp*);
    void visit(SgAdaRenamingRefExp*);
    void visit(SgAdaTaskRefExp*);
    void visit(SgAdaUnitRefExp*);
    void visit(SgAddOp*);
    void visit(SgAddressOfOp*);
    void visit(SgAggregateInitializer*);
    void visit(SgAlignOfOp*);
    void visit(SgAndAssignOp*);
    void visit(SgAndOp*);
    void visit(SgArrowExp*);
    void visit(SgArrowStarOp*);
    void visit(SgAsmOp*);
    void visit(SgAssignInitializer*);
    void visit(SgAssignOp*);
    void visit(SgAsteriskShapeExp*);
    void visit(SgAtExp*);
    void visit(SgAtOp*);
    void visit(SgAwaitExpression*);
    void visit(SgBitAndOp*);
    void visit(SgBitComplementOp*);
    void visit(SgBitEqvOp*);
    void visit(SgBitOrOp*);
    void visit(SgBitXorOp*);
    void visit(SgBoolValExp*);
    void visit(SgBracedInitializer*);
    void visit(SgCAFCoExpression*);
    void visit(SgCastExp*);
    void visit(SgChar16Val*);
    void visit(SgChar32Val*);
    void visit(SgCharVal*);
    void visit(SgChooseExpression*);
    void visit(SgClassExp*);
    void visit(SgClassNameRefExp*);
    void visit(SgColonShapeExp*);
    void visit(SgCommaOpExp*);
    void visit(SgComplexVal*);
    void visit(SgCompoundInitializer*);
    void visit(SgCompoundLiteralExp*);
    void visit(SgComprehension*);
    void visit(SgConcatenationOp*);
    void visit(SgConjugateOp*);
    void visit(SgConditionalExp*);
    void visit(SgConstructorInitializer*);
    void visit(SgCudaKernelCallExp*);
    void visit(SgCudaKernelExecConfig*);
    void visit(SgDeleteExp*);
    void visit(SgDesignatedInitializer*);
    void visit(SgDictionaryComprehension*);
    void visit(SgDictionaryExp*);
    void visit(SgDivAssignOp*);
    void visit(SgDivideOp*);
    void visit(SgDotDotExp*);
    void visit(SgDotExp*);
    void visit(SgDotStarOp*);
    void visit(SgDoubleVal*);
    void visit(SgElementwiseAddOp*);
    void visit(SgElementwiseDivideOp*);
    void visit(SgElementwiseLeftDivideOp*);
    void visit(SgElementwiseMultiplyOp*);
    void visit(SgElementwisePowerOp*);
    void visit(SgElementwiseSubtractOp*);
    void visit(SgEnumVal*);
    void visit(SgEqualityOp*);
    void visit(SgExponentiationAssignOp*);
    void visit(SgExponentiationOp*);
    void visit(SgExpressionRoot*);
    void visit(SgFinishExp*);
    void visit(SgFloat128Val*);
    void visit(SgFloat80Val*);
    void visit(SgFloatVal*);
    void visit(SgFoldExpression*);
    void visit(SgFunctionParameterRefExp*);
    void visit(SgFunctionRefExp*);
    void visit(SgGreaterOrEqualOp*);
    void visit(SgGreaterThanOp*);
    void visit(SgHereExp*);
    void visit(SgImagPartOp*);
    void visit(SgImpliedDo*);
    void visit(SgIntegerDivideAssignOp*);
    void visit(SgIntegerDivideOp*);
    void visit(SgIntVal*);
    void visit(SgIOItemExpression*);
    void visit(SgIorAssignOp*);
    void visit(SgIsNotOp*);
    void visit(SgIsOp*);
    void visit(SgJavaInstanceOfOp*);
    void visit(SgJavaMarkerAnnotation*);
    void visit(SgJavaNormalAnnotation*);
    void visit(SgJavaSingleMemberAnnotation*);
    void visit(SgJavaTypeExpression*);
    void visit(SgJavaUnsignedRshiftAssignOp*);
    void visit(SgJavaUnsignedRshiftOp*);
    void visit(SgJovialPresetPositionExp*);
    void visit(SgJovialTablePresetExp*);
    void visit(SgKeyDatumPair*);
    void visit(SgLabelRefExp*);
    void visit(SgLambdaExp*);
    void visit(SgLambdaRefExp*);
    void visit(SgLeftDivideOp*);
    void visit(SgLessOrEqualOp*);
    void visit(SgLessThanOp*);
    void visit(SgListComprehension*);
    void visit(SgListExp*);
    void visit(SgLongDoubleVal*);
    void visit(SgLongIntVal*);
    void visit(SgLongLongIntVal*);
    void visit(SgLshiftAssignOp*);
    void visit(SgLshiftOp*);
    void visit(SgMagicColonExp*);
    void visit(SgMatrixExp*);
    void visit(SgMatrixTransposeOp*);
    void visit(SgMemberFunctionRefExp*);
    void visit(SgMembershipOp*);
    void visit(SgMinusAssignOp*);
    void visit(SgMinusMinusOp*);
    void visit(SgMinusOp*);
    void visit(SgModAssignOp*);
    void visit(SgModOp*);
    void visit(SgMultAssignOp*);
    void visit(SgMultiplyOp*);
    void visit(SgNaryBooleanOp*);
    void visit(SgNaryComparisonOp*);
    void visit(SgNewExp*);
    void visit(SgNoexceptOp*);
    void visit(SgNonMembershipOp*);
    void visit(SgNonrealRefExp*);
    void visit(SgNotOp*);
    void visit(SgNotEqualOp*);
    void visit(SgNullExpression*);
    void visit(SgNullptrValExp*);
    void visit(SgOrOp*);
    void visit(SgPlusAssignOp*);
    void visit(SgPlusPlusOp*);
    void visit(SgPntrArrRefExp*);
    void visit(SgPointerAssignOp*);
    void visit(SgPointerDerefExp*);
    void visit(SgPowerOp*);
    void visit(SgPseudoDestructorRefExp*);
    void visit(SgRangeExp*);
    void visit(SgRealPartOp*);
    void visit(SgRefExp*);
    void visit(SgRemOp*);
    void visit(SgReplicationOp*);
    void visit(SgRshiftAssignOp*);
    void visit(SgRshiftOp*);
    void visit(SgScopeOp*);
    void visit(SgSetComprehension*);
    void visit(SgShortVal*);
    void visit(SgSizeOfOp*);
    void visit(SgSpaceshipOp*);
    void visit(SgStatementExpression*);
    void visit(SgStringConversion*);
    void visit(SgStringVal*);
    void visit(SgSubscriptExpression*);
    void visit(SgSubtractOp*);
    void visit(SgSuperExp*);
    void visit(SgTemplateFunctionRefExp*);
    void visit(SgTemplateMemberFunctionRefExp*);
    void visit(SgTemplateParameterVal*);
    void visit(SgThisExp*);
    void visit(SgThrowOp*);
    void visit(SgTupleExp*);
    void visit(SgTypeExpression*);
    void visit(SgTypeIdOp*);
    void visit(SgTypeTraitBuiltinOperator*);
    void visit(SgUnaryAddOp*);
    void visit(SgUnknownArrayOrFunctionReference*);
    void visit(SgSignedCharVal*);
    void visit(SgUnsignedCharVal*);
    void visit(SgUnsignedIntVal*);
    void visit(SgUnsignedLongLongIntVal*);
    void visit(SgUnsignedLongVal*);
    void visit(SgUnsignedShortVal*);
    void visit(SgUpcBlocksizeofExpression*);
    void visit(SgUpcElemsizeofExpression*);
    void visit(SgUpcLocalsizeofExpression*);
    void visit(SgUpcMythread*);
    void visit(SgUpcThreads*);
    void visit(SgUserDefinedBinaryOp*);
    void visit(SgUserDefinedUnaryOp*);
    void visit(SgVarArgCopyOp*);
    void visit(SgVarArgEndOp*);
    void visit(SgVarArgOp*);
    void visit(SgVarArgStartOneOperandOp*);
    void visit(SgVarArgStartOp*);
    void visit(SgVariantExpression*);
    void visit(SgVarRefExp*);
    void visit(SgVoidVal*);
    void visit(SgWcharVal*);
    void visit(SgXorAssignOp*);
    void visit(SgYieldExpression*);
    void visit(SgCompoundAssignOp*);
    void visit(SgElementwiseOp*);
    void visit(SgBinaryOp*);
    void visit(SgFunctionCallExp*);
    void visit(SgCallExpression*);
    void visit(SgExprListExp*);
    void visit(SgInitializer*);
    void visit(SgJavaAnnotation*);
    void visit(SgNaryOp*);
    void visit(SgUnaryOp*);
    void visit(SgValueExp*);
    void visit(SgScopedRefExp*);
    void visit(SgTypeRefExp*);
    void visit(SgReferenceExp*);
    void visit(SgExpression*);
    void visit(SgTemplateVariableSymbol*);
    void visit(SgVariableSymbol*);
    void visit(SgFunctionTypeSymbol*);
    void visit(SgTemplateClassSymbol*);
    void visit(SgClassSymbol*);
    void visit(SgTemplateSymbol*);
    void visit(SgEnumSymbol*);
    void visit(SgEnumFieldSymbol*);
    void visit(SgTemplateTypedefSymbol*);
    void visit(SgTypedefSymbol*);
    void visit(SgTemplateFunctionSymbol*);
    void visit(SgTemplateMemberFunctionSymbol*);
    void visit(SgLabelSymbol*);
    void visit(SgJavaLabelSymbol*);
    void visit(SgDefaultSymbol*);
    void visit(SgNamespaceSymbol*);
    void visit(SgIntrinsicSymbol*);
    void visit(SgModuleSymbol*);
    void visit(SgInterfaceSymbol*);
    void visit(SgCommonSymbol*);
    void visit(SgRenameSymbol*);
    void visit(SgAdaInheritedFunctionSymbol*);
    void visit(SgMemberFunctionSymbol*);
    void visit(SgFunctionSymbol*);
    void visit(SgTypeSymbol*);
    void visit(SgAsmBinaryAddressSymbol*);
    void visit(SgAsmBinaryDataSymbol*);
    void visit(SgAliasSymbol*);
    void visit(SgNonrealSymbol*);
    void visit(SgAdaPackageSymbol*);
    void visit(SgAdaTaskSymbol*);
    void visit(SgAdaProtectedSymbol*);
    void visit(SgAdaGenericSymbol*);
    void visit(SgAdaGenericInstanceSymbol*);
    void visit(SgAdaFormalPackageSymbol*);
    void visit(SgAdaRenamingSymbol*);
    void visit(SgSymbol*);
    void visit(SgAsmX86Instruction*);
    void visit(SgAsmVoidType*);
    void visit(SgAsmVectorType*);
    void visit(SgAsmUserInstruction*);
    void visit(SgAsmUnaryUnsignedExtend*);
    void visit(SgAsmUnaryTruncate*);
    void visit(SgAsmUnarySignedExtend*);
    void visit(SgAsmUnaryRrx*);
    void visit(SgAsmUnaryPlus*);
    void visit(SgAsmUnaryMinus*);
    void visit(SgAsmUnaryExpression*);
    void visit(SgAsmSynthesizedFieldDeclaration*);
    void visit(SgAsmSynthesizedDataStructureDeclaration*);
    void visit(SgAsmStringStorage*);
    void visit(SgAsmStoredString*);
    void visit(SgAsmStaticData*);
    void visit(SgAsmStackExpression*);
    void visit(SgAsmRiscOperation*);
    void visit(SgAsmRegisterNames*);
    void visit(SgAsmPowerpcInstruction*);
    void visit(SgAsmPointerType*);
    void visit(SgAsmPEStringSection*);
    void visit(SgAsmPESectionTable*);
    void visit(SgAsmPESectionTableEntry*);
    void visit(SgAsmPERVASizePairList*);
    void visit(SgAsmPERVASizePair*);
    void visit(SgAsmPEImportSection*);
    void visit(SgAsmPEImportItemList*);
    void visit(SgAsmPEImportItem*);
    void visit(SgAsmPEImportDirectoryList*);
    void visit(SgAsmPEImportDirectory*);
    void visit(SgAsmPEFileHeader*);
    void visit(SgAsmPEExportSection*);
    void visit(SgAsmPESection*);
    void visit(SgAsmPEExportEntryList*);
    void visit(SgAsmPEExportEntry*);
    void visit(SgAsmPEExportDirectory*);
    void visit(SgAsmOperandList*);
    void visit(SgAsmNullInstruction*);
    void visit(SgAsmNEStringTable*);
    void visit(SgAsmNESectionTable*);
    void visit(SgAsmNESectionTableEntry*);
    void visit(SgAsmNESection*);
    void visit(SgAsmNERelocTable*);
    void visit(SgAsmNERelocEntry*);
    void visit(SgAsmNENameTable*);
    void visit(SgAsmNEModuleTable*);
    void visit(SgAsmNEFileHeader*);
    void visit(SgAsmNEEntryTable*);
    void visit(SgAsmNEEntryPoint*);
    void visit(SgAsmMipsInstruction*);
    void visit(SgAsmMemoryReferenceExpression*);
    void visit(SgAsmM68kInstruction*);
    void visit(SgAsmLESectionTable*);
    void visit(SgAsmLESectionTableEntry*);
    void visit(SgAsmLESection*);
    void visit(SgAsmLERelocTable*);
    void visit(SgAsmLEPageTable*);
    void visit(SgAsmLEPageTableEntry*);
    void visit(SgAsmLENameTable*);
    void visit(SgAsmLEFileHeader*);
    void visit(SgAsmLEEntryTable*);
    void visit(SgAsmLEEntryPoint*);
    void visit(SgAsmJvmSynthetic*);
    void visit(SgAsmJvmStackMapVerificationType*);
    void visit(SgAsmJvmStackMapTable*);
    void visit(SgAsmJvmStackMapFrame*);
    void visit(SgAsmJvmSourceFile*);
    void visit(SgAsmJvmSignature*);
    void visit(SgAsmJvmNestMembers*);
    void visit(SgAsmJvmNestHost*);
    void visit(SgAsmJvmModuleMainClass*);
    void visit(SgAsmJvmMethodTable*);
    void visit(SgAsmJvmMethodParameters*);
    void visit(SgAsmJvmMethodParametersEntry*);
    void visit(SgAsmJvmMethod*);
    void visit(SgAsmJvmLocalVariableTypeTable*);
    void visit(SgAsmJvmLocalVariableTypeEntry*);
    void visit(SgAsmJvmLocalVariableTable*);
    void visit(SgAsmJvmLocalVariableEntry*);
    void visit(SgAsmJvmLineNumberTable*);
    void visit(SgAsmJvmLineNumberEntry*);
    void visit(SgAsmJvmInstruction*);
    void visit(SgAsmJvmInnerClasses*);
    void visit(SgAsmJvmInnerClassesEntry*);
    void visit(SgAsmJvmFileHeader*);
    void visit(SgAsmJvmFieldTable*);
    void visit(SgAsmJvmField*);
    void visit(SgAsmJvmExceptionTable*);
    void visit(SgAsmJvmExceptions*);
    void visit(SgAsmJvmExceptionHandler*);
    void visit(SgAsmJvmEnclosingMethod*);
    void visit(SgAsmJvmDeprecated*);
    void visit(SgAsmJvmConstantValue*);
    void visit(SgAsmJvmConstantPool*);
    void visit(SgAsmJvmConstantPoolEntry*);
    void visit(SgAsmJvmCodeAttribute*);
    void visit(SgAsmJvmClass*);
    void visit(SgAsmJvmBootstrapMethods*);
    void visit(SgAsmJvmBootstrapMethod*);
    void visit(SgAsmJvmAttributeTable*);
    void visit(SgAsmJvmAttribute*);
    void visit(SgAsmJvmNode*);
    void visit(SgAsmInterpretationList*);
    void visit(SgAsmInterpretation*);
    void visit(SgAsmIntegerValueExpression*);
    void visit(SgAsmIntegerType*);
    void visit(SgAsmInstructionList*);
    void visit(SgAsmIndirectRegisterExpression*);
    void visit(SgAsmGenericSymbolList*);
    void visit(SgAsmGenericSectionList*);
    void visit(SgAsmGenericHeaderList*);
    void visit(SgAsmGenericFormat*);
    void visit(SgAsmGenericFileList*);
    void visit(SgAsmGenericFile*);
    void visit(SgAsmGenericDLLList*);
    void visit(SgAsmGenericDLL*);
    void visit(SgAsmFunction*);
    void visit(SgAsmSynthesizedDeclaration*);
    void visit(SgAsmFloatValueExpression*);
    void visit(SgAsmFloatType*);
    void visit(SgAsmScalarType*);
    void visit(SgAsmType*);
    void visit(SgAsmExprListExp*);
    void visit(SgAsmElfSymverSection*);
    void visit(SgAsmElfSymverNeededSection*);
    void visit(SgAsmElfSymverNeededEntryList*);
    void visit(SgAsmElfSymverNeededEntry*);
    void visit(SgAsmElfSymverNeededAuxList*);
    void visit(SgAsmElfSymverNeededAux*);
    void visit(SgAsmElfSymverEntryList*);
    void visit(SgAsmElfSymverEntry*);
    void visit(SgAsmElfSymverDefinedSection*);
    void visit(SgAsmElfSymverDefinedEntryList*);
    void visit(SgAsmElfSymverDefinedEntry*);
    void visit(SgAsmElfSymverDefinedAuxList*);
    void visit(SgAsmElfSymverDefinedAux*);
    void visit(SgAsmElfSymbolSection*);
    void visit(SgAsmElfSymbolList*);
    void visit(SgAsmElfSymbol*);
    void visit(SgAsmElfStrtab*);
    void visit(SgAsmElfStringSection*);
    void visit(SgAsmElfSegmentTable*);
    void visit(SgAsmElfSegmentTableEntryList*);
    void visit(SgAsmElfSegmentTableEntry*);
    void visit(SgAsmElfSectionTable*);
    void visit(SgAsmElfSectionTableEntry*);
    void visit(SgAsmElfRelocSection*);
    void visit(SgAsmElfRelocEntryList*);
    void visit(SgAsmElfRelocEntry*);
    void visit(SgAsmElfNoteSection*);
    void visit(SgAsmElfNoteEntryList*);
    void visit(SgAsmElfNoteEntry*);
    void visit(SgAsmElfFileHeader*);
    void visit(SgAsmElfEHFrameSection*);
    void visit(SgAsmElfEHFrameEntryFDList*);
    void visit(SgAsmElfEHFrameEntryFD*);
    void visit(SgAsmElfEHFrameEntryCIList*);
    void visit(SgAsmElfEHFrameEntryCI*);
    void visit(SgAsmElfDynamicSection*);
    void visit(SgAsmElfSection*);
    void visit(SgAsmElfDynamicEntryList*);
    void visit(SgAsmElfDynamicEntry*);
    void visit(SgAsmDwarfWithStmt*);
    void visit(SgAsmDwarfVolatileType*);
    void visit(SgAsmDwarfVariantPart*);
    void visit(SgAsmDwarfVariant*);
    void visit(SgAsmDwarfVariable*);
    void visit(SgAsmDwarfUpcStrictType*);
    void visit(SgAsmDwarfUpcSharedType*);
    void visit(SgAsmDwarfUpcRelaxedType*);
    void visit(SgAsmDwarfUnspecifiedType*);
    void visit(SgAsmDwarfUnspecifiedParameters*);
    void visit(SgAsmDwarfUnknownConstruct*);
    void visit(SgAsmDwarfUnionType*);
    void visit(SgAsmDwarfTypedef*);
    void visit(SgAsmDwarfTryBlock*);
    void visit(SgAsmDwarfThrownType*);
    void visit(SgAsmDwarfTemplateValueParameter*);
    void visit(SgAsmDwarfTemplateTypeParameter*);
    void visit(SgAsmDwarfSubroutineType*);
    void visit(SgAsmDwarfSubrangeType*);
    void visit(SgAsmDwarfSubprogram*);
    void visit(SgAsmDwarfStructureType*);
    void visit(SgAsmDwarfStringType*);
    void visit(SgAsmDwarfSharedType*);
    void visit(SgAsmDwarfSetType*);
    void visit(SgAsmDwarfRestrictType*);
    void visit(SgAsmDwarfReferenceType*);
    void visit(SgAsmDwarfPtrToMemberType*);
    void visit(SgAsmDwarfPointerType*);
    void visit(SgAsmDwarfPartialUnit*);
    void visit(SgAsmDwarfPackedType*);
    void visit(SgAsmDwarfNamespace*);
    void visit(SgAsmDwarfNamelistItem*);
    void visit(SgAsmDwarfNamelist*);
    void visit(SgAsmDwarfMutableType*);
    void visit(SgAsmDwarfModule*);
    void visit(SgAsmDwarfMember*);
    void visit(SgAsmDwarfMacroList*);
    void visit(SgAsmDwarfMacro*);
    void visit(SgAsmDwarfLineList*);
    void visit(SgAsmDwarfLine*);
    void visit(SgAsmDwarfLexicalBlock*);
    void visit(SgAsmDwarfLabel*);
    void visit(SgAsmDwarfInterfaceType*);
    void visit(SgAsmDwarfInlinedSubroutine*);
    void visit(SgAsmDwarfInheritance*);
    void visit(SgAsmDwarfImportedUnit*);
    void visit(SgAsmDwarfImportedModule*);
    void visit(SgAsmDwarfImportedDeclaration*);
    void visit(SgAsmDwarfFunctionTemplate*);
    void visit(SgAsmDwarfFriend*);
    void visit(SgAsmDwarfFormatLabel*);
    void visit(SgAsmDwarfFormalParameter*);
    void visit(SgAsmDwarfFileType*);
    void visit(SgAsmDwarfEnumerator*);
    void visit(SgAsmDwarfEnumerationType*);
    void visit(SgAsmDwarfEntryPoint*);
    void visit(SgAsmDwarfDwarfProcedure*);
    void visit(SgAsmDwarfConstType*);
    void visit(SgAsmDwarfConstructList*);
    void visit(SgAsmDwarfConstant*);
    void visit(SgAsmDwarfCondition*);
    void visit(SgAsmDwarfCompilationUnitList*);
    void visit(SgAsmDwarfCompilationUnit*);
    void visit(SgAsmDwarfCommonInclusion*);
    void visit(SgAsmDwarfCommonBlock*);
    void visit(SgAsmDwarfClassType*);
    void visit(SgAsmDwarfClassTemplate*);
    void visit(SgAsmDwarfCatchBlock*);
    void visit(SgAsmDwarfBaseType*);
    void visit(SgAsmDwarfArrayType*);
    void visit(SgAsmDwarfAccessDeclaration*);
    void visit(SgAsmDwarfConstruct*);
    void visit(SgAsmDwarfInformation*);
    void visit(SgAsmDOSFileHeader*);
    void visit(SgAsmGenericHeader*);
    void visit(SgAsmDOSExtendedHeader*);
    void visit(SgAsmDirectRegisterExpression*);
    void visit(SgAsmRegisterReferenceExpression*);
    void visit(SgAsmControlFlagsExpression*);
    void visit(SgAsmConstantExpression*);
    void visit(SgAsmValueExpression*);
    void visit(SgAsmCommonSubExpression*);
    void visit(SgAsmCoffSymbolTable*);
    void visit(SgAsmCoffSymbolList*);
    void visit(SgAsmCoffSymbol*);
    void visit(SgAsmGenericSymbol*);
    void visit(SgAsmCoffStrtab*);
    void visit(SgAsmGenericStrtab*);
    void visit(SgAsmCliHeader*);
    void visit(SgAsmGenericSection*);
    void visit(SgAsmCilUint8Heap*);
    void visit(SgAsmCilUint32Heap*);
    void visit(SgAsmCilTypeSpecTable*);
    void visit(SgAsmCilTypeSpec*);
    void visit(SgAsmCilTypeRefTable*);
    void visit(SgAsmCilTypeRef*);
    void visit(SgAsmCilTypeDefTable*);
    void visit(SgAsmCilTypeDef*);
    void visit(SgAsmCilStandAloneSigTable*);
    void visit(SgAsmCilStandAloneSig*);
    void visit(SgAsmCilPropertyTable*);
    void visit(SgAsmCilPropertyMapTable*);
    void visit(SgAsmCilPropertyMap*);
    void visit(SgAsmCilProperty*);
    void visit(SgAsmCilParamTable*);
    void visit(SgAsmCilParam*);
    void visit(SgAsmCilNestedClassTable*);
    void visit(SgAsmCilNestedClass*);
    void visit(SgAsmCilModuleTable*);
    void visit(SgAsmCilModuleRefTable*);
    void visit(SgAsmCilModuleRef*);
    void visit(SgAsmCilModule*);
    void visit(SgAsmCilMethodSpecTable*);
    void visit(SgAsmCilMethodSpec*);
    void visit(SgAsmCilMethodSemanticsTable*);
    void visit(SgAsmCilMethodSemantics*);
    void visit(SgAsmCilMethodImplTable*);
    void visit(SgAsmCilMethodImpl*);
    void visit(SgAsmCilMethodDefTable*);
    void visit(SgAsmCilMethodDef*);
    void visit(SgAsmCilMethodData*);
    void visit(SgAsmCilMetadataRoot*);
    void visit(SgAsmCilMetadataHeap*);
    void visit(SgAsmCilMemberRefTable*);
    void visit(SgAsmCilMemberRef*);
    void visit(SgAsmCilManifestResourceTable*);
    void visit(SgAsmCilManifestResource*);
    void visit(SgAsmCilInterfaceImplTable*);
    void visit(SgAsmCilInterfaceImpl*);
    void visit(SgAsmCilInstruction*);
    void visit(SgAsmCilImplMapTable*);
    void visit(SgAsmCilImplMap*);
    void visit(SgAsmCilGenericParamTable*);
    void visit(SgAsmCilGenericParam*);
    void visit(SgAsmCilGenericParamConstraintTable*);
    void visit(SgAsmCilGenericParamConstraint*);
    void visit(SgAsmCilFileTable*);
    void visit(SgAsmCilFile*);
    void visit(SgAsmCilFieldTable*);
    void visit(SgAsmCilFieldRVATable*);
    void visit(SgAsmCilFieldRVA*);
    void visit(SgAsmCilFieldMarshalTable*);
    void visit(SgAsmCilFieldMarshal*);
    void visit(SgAsmCilFieldLayoutTable*);
    void visit(SgAsmCilFieldLayout*);
    void visit(SgAsmCilField*);
    void visit(SgAsmCilExportedTypeTable*);
    void visit(SgAsmCilExportedType*);
    void visit(SgAsmCilExceptionData*);
    void visit(SgAsmCilEventTable*);
    void visit(SgAsmCilEventMapTable*);
    void visit(SgAsmCilEventMap*);
    void visit(SgAsmCilEvent*);
    void visit(SgAsmCilErrorHeap*);
    void visit(SgAsmCilDeclSecurityTable*);
    void visit(SgAsmCilDeclSecurity*);
    void visit(SgAsmCilDataStream*);
    void visit(SgAsmCilCustomAttributeTable*);
    void visit(SgAsmCilCustomAttribute*);
    void visit(SgAsmCilConstantTable*);
    void visit(SgAsmCilConstant*);
    void visit(SgAsmCilClassLayoutTable*);
    void visit(SgAsmCilClassLayout*);
    void visit(SgAsmCilAssemblyTable*);
    void visit(SgAsmCilAssemblyRefTable*);
    void visit(SgAsmCilAssemblyRefProcessorTable*);
    void visit(SgAsmCilAssemblyRefProcessor*);
    void visit(SgAsmCilAssemblyRefOSTable*);
    void visit(SgAsmCilAssemblyRefOS*);
    void visit(SgAsmCilAssemblyRef*);
    void visit(SgAsmCilAssemblyProcessorTable*);
    void visit(SgAsmCilAssemblyProcessor*);
    void visit(SgAsmCilAssemblyOSTable*);
    void visit(SgAsmCilAssemblyOS*);
    void visit(SgAsmCilAssembly*);
    void visit(SgAsmCilMetadata*);
    void visit(SgAsmCilNode*);
    void visit(SgAsmByteOrder*);
    void visit(SgAsmBlock*);
    void visit(SgAsmBinarySubtract*);
    void visit(SgAsmBinaryRor*);
    void visit(SgAsmBinaryPreupdate*);
    void visit(SgAsmBinaryPostupdate*);
    void visit(SgAsmBinaryMultiply*);
    void visit(SgAsmBinaryMsl*);
    void visit(SgAsmBinaryMod*);
    void visit(SgAsmBinaryLsr*);
    void visit(SgAsmBinaryLsl*);
    void visit(SgAsmBinaryDivide*);
    void visit(SgAsmBinaryConcat*);
    void visit(SgAsmBinaryAsr*);
    void visit(SgAsmBinaryAdd*);
    void visit(SgAsmBinaryExpression*);
    void visit(SgAsmBasicString*);
    void visit(SgAsmGenericString*);
    void visit(SgAsmExecutableFileFormat*);
    void visit(SgAsmInstruction*);
    void visit(SgAsmStatement*);
    void visit(SgAsmAarch32Coprocessor*);
    void visit(SgAsmExpression*);
    void visit(SgAsmNode*);
    void visit(SgCommonBlockObject*);
    void visit(SgInitializedName*);
    void visit(SgLambdaCapture*);
    void visit(SgLambdaCaptureList*);
    void visit(SgJavaMemberValuePair*);
    void visit(SgOmpOrderedClause*);
    void visit(SgOmpNowaitClause*);
    void visit(SgOmpBeginClause*);
    void visit(SgOmpEndClause*);
    void visit(SgOmpUntiedClause*);
    void visit(SgOmpMergeableClause*);
    void visit(SgOmpDefaultClause*);
    void visit(SgOmpAtomicClause*);
    void visit(SgOmpProcBindClause*);
    void visit(SgOmpInbranchClause*);
    void visit(SgOmpNotinbranchClause*);
    void visit(SgOmpCollapseClause*);
    void visit(SgOmpIfClause*);
    void visit(SgOmpFinalClause*);
    void visit(SgOmpPriorityClause*);
    void visit(SgOmpNumThreadsClause*);
    void visit(SgOmpDeviceClause*);
    void visit(SgOmpSafelenClause*);
    void visit(SgOmpSimdlenClause*);
    void visit(SgOmpExpressionClause*);
    void visit(SgOmpCopyprivateClause*);
    void visit(SgOmpPrivateClause*);
    void visit(SgOmpFirstprivateClause*);
    void visit(SgOmpSharedClause*);
    void visit(SgOmpCopyinClause*);
    void visit(SgOmpLastprivateClause*);
    void visit(SgOmpReductionClause*);
    void visit(SgOmpDependClause*);
    void visit(SgOmpMapClause*);
    void visit(SgOmpLinearClause*);
    void visit(SgOmpUniformClause*);
    void visit(SgOmpAlignedClause*);
    void visit(SgOmpVariablesClause*);
    void visit(SgOmpScheduleClause*);
    void visit(SgOmpClause*);
    void visit(SgRenamePair*);
    void visit(SgInterfaceBody*);
    void visit(SgHeaderFileBody*);
    void visit(SgAdaRangeConstraint*);
    void visit(SgAdaIndexConstraint*);
    void visit(SgAdaDigitsConstraint*);
    void visit(SgAdaDeltaConstraint*);
    void visit(SgAdaDiscriminantConstraint*);
    void visit(SgAdaNullConstraint*);
    void visit(SgAdaTypeConstraint*);
    void visit(SgLocatedNodeSupport*);
    void visit(SgToken*);
    void visit(SgLocatedNode*);
    virtual void visit(SgNode*);
};

template<class R>
class Visitor_R: public ROSE_VisitorPattern {
protected:
    /** Result of a visit method. */
    R _result;

public:
    virtual ~Visitor_R() {}

    /** Return the result of the visitor's computation. */
    virtual R& getResult() {
        return _result;
    }

   /** Return the result of the visitor's computation. */
   virtual const R& getResult() const {
        return _result;
    }
};

/** Strategy pattern applied to visitors.
 *
 * Serves as a context to a strategy,
 * which itself is a visitor; delegates all requests to the current strategy;
 * capable of switching strategy at will.  Derived classes may declare the
 * known strategies as friend to facilitate communication between the strategies
 * and their context. */
template<class R>
class ContextVis_R: public Visitor_R<R> {
protected:
    /** Strategy to process a node, can be set dynamically. */
    ROSE_VisitorPattern* _strategy; // not owned by this context.

public:
    virtual ~ContextVis_R() {
        _strategy = nullptr;
    }

    /** Allows the strategy to be set dynamically.
      *
      * @param strategy a visitor to process a node. */
    void setStrategy(ROSE_VisitorPattern* strategy) {
        _strategy = strategy;
    }

    virtual void visitDefault(SgNode *x) {
        _strategy->visitDefault(x);
    }

    virtual void visit(SgJovialBitVal *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgName *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgSymbolTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgPragma *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgModifierNodes *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgConstVolatileModifier *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgStorageModifier *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAccessModifier *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFunctionModifier *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUPC_AccessModifier *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgLinkageModifier *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgSpecialFunctionModifier *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeModifier *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgElaboratedTypeModifier *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgBaseClassModifier *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDeclarationModifier *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgStructureModifier *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOpenclAccessModeModifier *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgModifier *x) {
        _strategy->visit(x);
    }

    virtual void visit(Sg_File_Info *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgSourceFile *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUnknownFile *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJvmComposite *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgBinaryComposite *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFile *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFileList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDirectory *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDirectoryList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgProject *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOptions *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUnparse_Info *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgIncludeFile *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFuncDecl_attr *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgClassDecl_attr *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypedefSeq *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFunctionParameterTypeList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateParameter *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateArgument *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateParameterList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateArgumentList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgBitAttribute *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAttribute *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgExpBaseClass *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNonrealBaseClass *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgBaseClass *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUndirectedGraphEdge *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDirectedGraphEdge *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgGraphNode *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgGraphEdge *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgStringKeyedBidirectionalGraph *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgIntKeyedBidirectionalGraph *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgBidirectionalGraph *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgIncidenceDirectedGraph *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgIncidenceUndirectedGraph *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgGraph *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgGraphNodeList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgGraphEdgeList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgQualifiedName *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNameGroup *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDimensionObject *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDataStatementGroup *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDataStatementObject *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDataStatementValue *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFormatItem *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFormatItemList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJavaImportStatementList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJavaClassDeclarationList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgHeaderFileReport *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgSupport *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeUnknown *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeChar *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeSignedChar *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeUnsignedChar *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeShort *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeSignedShort *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeUnsignedShort *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeInt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeSignedInt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeUnsignedInt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeLong *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeSignedLong *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeUnsignedLong *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeVoid *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeGlobalVoid *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeWchar *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeFloat *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeDouble *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeLongLong *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeSignedLongLong *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeUnsignedLongLong *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeLongDouble *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeFloat80 *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeFloat128 *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeString *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeBool *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeFixed *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeMatrix *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeTuple *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeNullptr *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeComplex *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeImaginary *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeDefault *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgPointerMemberType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgReferenceType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgRvalueReferenceType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDeclType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeOfType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeCAFTeam *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeUnsigned128bitInteger *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeSigned128bitInteger *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeLabel *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJavaParameterizedType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJavaQualifiedType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJavaWildcardType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJavaUnionType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJavaParameterType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJovialTableType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgEnumType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypedefType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNonrealType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAutoType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgModifierType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgPartialFunctionModifierType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgArrayType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeEllipse *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaAccessType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaSubtype *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaDerivedType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaModularType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaDiscriminatedType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaFormalType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaDiscreteType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaSubroutineType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgRangeType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJovialBitType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeCrayPointer *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgPartialFunctionType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgMemberFunctionType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFunctionType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgPointerType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaTaskType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaProtectedType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgScopedType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgClassType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNamedType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgQualifiedNameType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeChar16 *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeChar32 *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgForStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgForInitStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgRangeBasedForStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgCatchStatementSeq *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFunctionParameterList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaParameterList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgCtorInitializerList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgBasicBlock *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgGlobal *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgIfStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgWhileStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDoWhileStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgSwitchStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgCatchOptionStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFunctionParameterScope *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDeclarationScope *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgVariableDefinition *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgStmtDeclarationStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgEnumDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFunctionTypeTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgExprStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgLabelStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgCaseOptionStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTryStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDefaultOptionStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgBreakStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgContinueStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgReturnStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgGotoStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaExitStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaLoopStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaDelayStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaSelectStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaSelectAlternativeStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaTerminateStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaUnscopedBlock *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaVariantWhenStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgSpawnStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFortranContinueStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateTypedefDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateInstantiationTypedefDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypedefDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNullStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgVariantStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgPragmaDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateClassDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateMemberFunctionDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateFunctionDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateVariableDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateVariableInstantiation *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgVariableDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateInstantiationDecl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateInstantiationDefn *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateInstantiationFunctionDecl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateInstantiationMemberFunctionDecl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNonrealDecl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgWithStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgPythonGlobalStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgPythonPrintStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgPassStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAssertStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgExecStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgProgramHeaderStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgProcedureHeaderStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgEntryStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFortranNonblockedDo *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgInterfaceStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgParameterStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgCommonBlock *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgModuleStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUseStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgProcessControlStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgPrintStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgReadStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgWriteStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOpenStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgCloseStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgInquireStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFlushStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgBackspaceStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgRewindStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgEndfileStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgWaitStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgCAFWithTeamStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFormatStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFortranDo *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgForAllStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgIOStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgSyncAllStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgSyncImagesStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgSyncMemoryStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgSyncTeamStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgLockStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUnlockStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgImageControlStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJovialCompoolStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJovialDefineDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJovialDirectiveStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJovialLabelDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJovialOverlayDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJovialForThenStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgMatlabForStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUpcNotifyStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUpcWaitStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUpcBarrierStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUpcFenceStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUpcForAllStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpParallelStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpSingleStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpTaskStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpForStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpForSimdStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpDoStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpSectionsStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpAtomicStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpTargetStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpTargetDataStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpSimdStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpClauseBodyStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpMasterStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpSectionStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpOrderedStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpWorkshareStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpCriticalStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpBodyStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJavaThrowStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJavaForEachStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJavaSynchronizedStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJavaLabelStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJavaImportStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJavaPackageDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJavaPackageStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsyncStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFinishStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAtStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAtomicStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgWhenStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgBlockDataStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgImplicitStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgStatementFunctionStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgWhereStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNullifyStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgEquivalenceStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDerivedTypeStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJovialTableStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAttributeSpecificationStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAllocateStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDeallocateStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgContainsStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgSequenceStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgElseWhereStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgArithmeticIfStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAssignStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgComputedGotoStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAssignedGotoStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNamelistStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgImportStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAssociateStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFortranIncludeLine *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNamespaceDeclarationStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNamespaceAliasDeclarationStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNamespaceDefinitionStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUsingDeclarationStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUsingDirectiveStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateInstantiationDirectiveStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgStaticAssertionDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateClassDefinition *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateFunctionDefinition *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgClassDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgClassDefinition *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFunctionDefinition *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaAcceptStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaPackageBody *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaPackageSpec *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaTaskBody *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaTaskSpec *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaProtectedBody *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaProtectedSpec *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaGenericDefn *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgScopeStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgMemberFunctionDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaEntryDecl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaFunctionRenamingDecl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFunctionDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgIncludeDirectiveStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDefineDirectiveStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUndefDirectiveStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgIfdefDirectiveStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgIfndefDirectiveStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgIfDirectiveStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDeadIfDirectiveStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgElseDirectiveStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgElseifDirectiveStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgEndifDirectiveStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgLineDirectiveStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgWarningDirectiveStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgErrorDirectiveStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgEmptyDirectiveStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgIncludeNextDirectiveStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgIdentDirectiveStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgLinemarkerDirectiveStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgC_PreprocessorDirectiveStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgClinkageStartStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgClinkageEndStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgClinkageDeclarationStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpFlushStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpDeclareSimdStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpBarrierStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpTaskwaitStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpThreadprivateStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgMicrosoftAttributeDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgEmptyDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaPackageSpecDecl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaPackageBodyDecl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaTaskSpecDecl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaTaskTypeDecl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaTaskBodyDecl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaProtectedSpecDecl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaProtectedTypeDecl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaProtectedBodyDecl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaRepresentationClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaEnumRepresentationClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaAttributeClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaComponentClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaRenamingDecl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaGenericDecl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaGenericInstanceDecl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaFormalTypeDecl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaFormalPackageDecl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaDiscriminatedTypeDecl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaVariantDecl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDeclarationStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAbsOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgActualArgumentExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaAncestorInitializer *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaAttributeExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaFloatVal *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaOthersExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaProtectedRefExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaRenamingRefExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaTaskRefExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaUnitRefExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAddOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAddressOfOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAggregateInitializer *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAlignOfOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAndAssignOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAndOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgArrowExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgArrowStarOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAssignInitializer *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAssignOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsteriskShapeExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAtExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAtOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAwaitExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgBitAndOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgBitComplementOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgBitEqvOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgBitOrOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgBitXorOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgBoolValExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgBracedInitializer *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgCAFCoExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgCastExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgChar16Val *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgChar32Val *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgCharVal *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgChooseExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgClassExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgClassNameRefExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgColonShapeExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgCommaOpExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgComplexVal *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgCompoundInitializer *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgCompoundLiteralExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgComprehension *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgConcatenationOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgConjugateOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgConditionalExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgConstructorInitializer *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgCudaKernelCallExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgCudaKernelExecConfig *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDeleteExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDesignatedInitializer *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDictionaryComprehension *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDictionaryExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDivAssignOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDivideOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDotDotExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDotExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDotStarOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDoubleVal *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgElementwiseAddOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgElementwiseDivideOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgElementwiseLeftDivideOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgElementwiseMultiplyOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgElementwisePowerOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgElementwiseSubtractOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgEnumVal *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgEqualityOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgExponentiationAssignOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgExponentiationOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgExpressionRoot *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFinishExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFloat128Val *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFloat80Val *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFloatVal *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFoldExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFunctionParameterRefExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFunctionRefExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgGreaterOrEqualOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgGreaterThanOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgHereExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgImagPartOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgImpliedDo *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgIntegerDivideAssignOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgIntegerDivideOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgIntVal *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgIOItemExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgIorAssignOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgIsNotOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgIsOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJavaInstanceOfOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJavaMarkerAnnotation *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJavaNormalAnnotation *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJavaSingleMemberAnnotation *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJavaTypeExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJavaUnsignedRshiftAssignOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJavaUnsignedRshiftOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJovialPresetPositionExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJovialTablePresetExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgKeyDatumPair *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgLabelRefExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgLambdaExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgLambdaRefExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgLeftDivideOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgLessOrEqualOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgLessThanOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgListComprehension *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgListExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgLongDoubleVal *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgLongIntVal *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgLongLongIntVal *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgLshiftAssignOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgLshiftOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgMagicColonExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgMatrixExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgMatrixTransposeOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgMemberFunctionRefExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgMembershipOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgMinusAssignOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgMinusMinusOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgMinusOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgModAssignOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgModOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgMultAssignOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgMultiplyOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNaryBooleanOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNaryComparisonOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNewExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNoexceptOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNonMembershipOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNonrealRefExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNotOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNotEqualOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNullExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNullptrValExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOrOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgPlusAssignOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgPlusPlusOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgPntrArrRefExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgPointerAssignOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgPointerDerefExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgPowerOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgPseudoDestructorRefExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgRangeExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgRealPartOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgRefExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgRemOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgReplicationOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgRshiftAssignOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgRshiftOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgScopeOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgSetComprehension *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgShortVal *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgSizeOfOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgSpaceshipOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgStatementExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgStringConversion *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgStringVal *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgSubscriptExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgSubtractOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgSuperExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateFunctionRefExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateMemberFunctionRefExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateParameterVal *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgThisExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgThrowOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTupleExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeIdOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeTraitBuiltinOperator *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUnaryAddOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUnknownArrayOrFunctionReference *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgSignedCharVal *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUnsignedCharVal *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUnsignedIntVal *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUnsignedLongLongIntVal *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUnsignedLongVal *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUnsignedShortVal *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUpcBlocksizeofExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUpcElemsizeofExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUpcLocalsizeofExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUpcMythread *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUpcThreads *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUserDefinedBinaryOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUserDefinedUnaryOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgVarArgCopyOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgVarArgEndOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgVarArgOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgVarArgStartOneOperandOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgVarArgStartOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgVariantExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgVarRefExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgVoidVal *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgWcharVal *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgXorAssignOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgYieldExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgCompoundAssignOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgElementwiseOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgBinaryOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFunctionCallExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgCallExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgExprListExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgInitializer *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJavaAnnotation *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNaryOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgUnaryOp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgValueExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgScopedRefExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeRefExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgReferenceExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateVariableSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgVariableSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFunctionTypeSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateClassSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgClassSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgEnumSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgEnumFieldSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateTypedefSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypedefSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateFunctionSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTemplateMemberFunctionSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgLabelSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJavaLabelSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgDefaultSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNamespaceSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgIntrinsicSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgModuleSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgInterfaceSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgCommonSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgRenameSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaInheritedFunctionSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgMemberFunctionSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgFunctionSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgTypeSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmBinaryAddressSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmBinaryDataSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAliasSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNonrealSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaPackageSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaTaskSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaProtectedSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaGenericSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaGenericInstanceSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaFormalPackageSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaRenamingSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmX86Instruction *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmVoidType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmVectorType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmUserInstruction *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmUnaryUnsignedExtend *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmUnaryTruncate *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmUnarySignedExtend *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmUnaryRrx *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmUnaryPlus *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmUnaryMinus *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmUnaryExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmSynthesizedFieldDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmSynthesizedDataStructureDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmStringStorage *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmStoredString *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmStaticData *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmStackExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmRiscOperation *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmRegisterNames *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmPowerpcInstruction *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmPointerType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmPEStringSection *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmPESectionTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmPESectionTableEntry *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmPERVASizePairList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmPERVASizePair *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmPEImportSection *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmPEImportItemList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmPEImportItem *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmPEImportDirectoryList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmPEImportDirectory *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmPEFileHeader *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmPEExportSection *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmPESection *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmPEExportEntryList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmPEExportEntry *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmPEExportDirectory *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmOperandList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmNullInstruction *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmNEStringTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmNESectionTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmNESectionTableEntry *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmNESection *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmNERelocTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmNERelocEntry *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmNENameTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmNEModuleTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmNEFileHeader *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmNEEntryTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmNEEntryPoint *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmMipsInstruction *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmMemoryReferenceExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmM68kInstruction *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmLESectionTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmLESectionTableEntry *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmLESection *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmLERelocTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmLEPageTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmLEPageTableEntry *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmLENameTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmLEFileHeader *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmLEEntryTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmLEEntryPoint *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmSynthetic *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmStackMapVerificationType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmStackMapTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmStackMapFrame *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmSourceFile *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmSignature *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmNestMembers *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmNestHost *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmModuleMainClass *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmMethodTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmMethodParameters *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmMethodParametersEntry *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmMethod *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmLocalVariableTypeTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmLocalVariableTypeEntry *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmLocalVariableTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmLocalVariableEntry *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmLineNumberTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmLineNumberEntry *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmInstruction *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmInnerClasses *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmInnerClassesEntry *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmFileHeader *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmFieldTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmField *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmExceptionTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmExceptions *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmExceptionHandler *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmEnclosingMethod *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmDeprecated *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmConstantValue *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmConstantPool *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmConstantPoolEntry *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmCodeAttribute *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmClass *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmBootstrapMethods *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmBootstrapMethod *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmAttributeTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmAttribute *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmJvmNode *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmInterpretationList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmInterpretation *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmIntegerValueExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmIntegerType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmInstructionList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmIndirectRegisterExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmGenericSymbolList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmGenericSectionList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmGenericHeaderList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmGenericFormat *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmGenericFileList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmGenericFile *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmGenericDLLList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmGenericDLL *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmFunction *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmSynthesizedDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmFloatValueExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmFloatType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmScalarType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmExprListExp *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfSymverSection *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfSymverNeededSection *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfSymverNeededEntryList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfSymverNeededEntry *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfSymverNeededAuxList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfSymverNeededAux *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfSymverEntryList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfSymverEntry *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfSymverDefinedSection *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfSymverDefinedEntryList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfSymverDefinedEntry *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfSymverDefinedAuxList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfSymverDefinedAux *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfSymbolSection *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfSymbolList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfStrtab *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfStringSection *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfSegmentTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfSegmentTableEntryList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfSegmentTableEntry *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfSectionTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfSectionTableEntry *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfRelocSection *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfRelocEntryList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfRelocEntry *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfNoteSection *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfNoteEntryList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfNoteEntry *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfFileHeader *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfEHFrameSection *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfEHFrameEntryFDList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfEHFrameEntryFD *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfEHFrameEntryCIList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfEHFrameEntryCI *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfDynamicSection *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfSection *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfDynamicEntryList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmElfDynamicEntry *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfWithStmt *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfVolatileType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfVariantPart *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfVariant *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfVariable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfUpcStrictType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfUpcSharedType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfUpcRelaxedType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfUnspecifiedType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfUnspecifiedParameters *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfUnknownConstruct *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfUnionType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfTypedef *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfTryBlock *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfThrownType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfTemplateValueParameter *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfTemplateTypeParameter *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfSubroutineType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfSubrangeType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfSubprogram *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfStructureType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfStringType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfSharedType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfSetType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfRestrictType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfReferenceType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfPtrToMemberType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfPointerType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfPartialUnit *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfPackedType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfNamespace *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfNamelistItem *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfNamelist *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfMutableType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfModule *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfMember *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfMacroList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfMacro *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfLineList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfLine *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfLexicalBlock *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfLabel *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfInterfaceType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfInlinedSubroutine *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfInheritance *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfImportedUnit *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfImportedModule *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfImportedDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfFunctionTemplate *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfFriend *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfFormatLabel *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfFormalParameter *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfFileType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfEnumerator *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfEnumerationType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfEntryPoint *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfDwarfProcedure *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfConstType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfConstructList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfConstant *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfCondition *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfCompilationUnitList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfCompilationUnit *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfCommonInclusion *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfCommonBlock *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfClassType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfClassTemplate *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfCatchBlock *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfBaseType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfArrayType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfAccessDeclaration *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfConstruct *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDwarfInformation *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDOSFileHeader *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmGenericHeader *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDOSExtendedHeader *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmDirectRegisterExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmRegisterReferenceExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmControlFlagsExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmConstantExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmValueExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCommonSubExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCoffSymbolTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCoffSymbolList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCoffSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmGenericSymbol *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCoffStrtab *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmGenericStrtab *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCliHeader *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmGenericSection *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilUint8Heap *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilUint32Heap *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilTypeSpecTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilTypeSpec *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilTypeRefTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilTypeRef *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilTypeDefTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilTypeDef *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilStandAloneSigTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilStandAloneSig *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilPropertyTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilPropertyMapTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilPropertyMap *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilProperty *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilParamTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilParam *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilNestedClassTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilNestedClass *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilModuleTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilModuleRefTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilModuleRef *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilModule *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilMethodSpecTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilMethodSpec *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilMethodSemanticsTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilMethodSemantics *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilMethodImplTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilMethodImpl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilMethodDefTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilMethodDef *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilMethodData *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilMetadataRoot *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilMetadataHeap *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilMemberRefTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilMemberRef *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilManifestResourceTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilManifestResource *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilInterfaceImplTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilInterfaceImpl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilInstruction *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilImplMapTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilImplMap *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilGenericParamTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilGenericParam *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilGenericParamConstraintTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilGenericParamConstraint *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilFileTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilFile *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilFieldTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilFieldRVATable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilFieldRVA *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilFieldMarshalTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilFieldMarshal *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilFieldLayoutTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilFieldLayout *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilField *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilExportedTypeTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilExportedType *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilExceptionData *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilEventTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilEventMapTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilEventMap *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilEvent *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilErrorHeap *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilDeclSecurityTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilDeclSecurity *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilDataStream *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilCustomAttributeTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilCustomAttribute *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilConstantTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilConstant *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilClassLayoutTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilClassLayout *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilAssemblyTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilAssemblyRefTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilAssemblyRefProcessorTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilAssemblyRefProcessor *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilAssemblyRefOSTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilAssemblyRefOS *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilAssemblyRef *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilAssemblyProcessorTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilAssemblyProcessor *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilAssemblyOSTable *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilAssemblyOS *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilAssembly *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilMetadata *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmCilNode *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmByteOrder *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmBlock *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmBinarySubtract *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmBinaryRor *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmBinaryPreupdate *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmBinaryPostupdate *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmBinaryMultiply *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmBinaryMsl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmBinaryMod *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmBinaryLsr *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmBinaryLsl *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmBinaryDivide *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmBinaryConcat *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmBinaryAsr *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmBinaryAdd *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmBinaryExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmBasicString *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmGenericString *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmExecutableFileFormat *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmInstruction *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmStatement *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmAarch32Coprocessor *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmExpression *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAsmNode *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgCommonBlockObject *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgInitializedName *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgLambdaCapture *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgLambdaCaptureList *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgJavaMemberValuePair *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpOrderedClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpNowaitClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpBeginClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpEndClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpUntiedClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpMergeableClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpDefaultClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpAtomicClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpProcBindClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpInbranchClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpNotinbranchClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpCollapseClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpIfClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpFinalClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpPriorityClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpNumThreadsClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpDeviceClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpSafelenClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpSimdlenClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpExpressionClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpCopyprivateClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpPrivateClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpFirstprivateClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpSharedClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpCopyinClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpLastprivateClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpReductionClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpDependClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpMapClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpLinearClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpUniformClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpAlignedClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpVariablesClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpScheduleClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgOmpClause *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgRenamePair *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgInterfaceBody *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgHeaderFileBody *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaRangeConstraint *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaIndexConstraint *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaDigitsConstraint *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaDeltaConstraint *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaDiscriminantConstraint *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaNullConstraint *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgAdaTypeConstraint *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgLocatedNodeSupport *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgToken *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgLocatedNode *x) {
        _strategy->visit(x);
    }

    virtual void visit(SgNode *x) {
        _strategy->visit(x);
    }
};

#endif // SWIG
#endif // include-once

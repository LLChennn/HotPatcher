#pragma once

#include "Struct/AssetManager/FAssetDependenciesDetail.h"
#include "CoreMinimal.h"
#include "FAssetDependenciesInfo.generated.h"

USTRUCT(BlueprintType)
struct FAssetDependenciesInfo
{
	GENERATED_USTRUCT_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString mAssetRef;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TMap<FString,FAssetDependenciesDetail> mDependencies;
};

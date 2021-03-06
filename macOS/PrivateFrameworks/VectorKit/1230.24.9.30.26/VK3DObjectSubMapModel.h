//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VKBuildingFootprintMapModel;

__attribute__((visibility("hidden")))
@interface VK3DObjectSubMapModel : NSObject
{
    struct unique_ptr<ggl::FragmentedPool<ggl::LandmarkDepth::BuildingPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::LandmarkDepth::BuildingPipelineSetup>>> _depthPassPipelineSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::DiffuseLandmark::BuildingPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::DiffuseLandmark::BuildingPipelineSetup>>> _diffuseObject3DPipelineSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::SpecularLandmark::LandmarkPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::SpecularLandmark::LandmarkPipelineSetup>>> _specularObject3DPipelineSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::LandmarkFlat::LandmarkPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::LandmarkFlat::LandmarkPipelineSetup>>> _object2DPipelineSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::FoggedDiffuseLandmark::LandmarkPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::FoggedDiffuseLandmark::LandmarkPipelineSetup>>> _diffuseFoggedObject3DPipelineSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::FoggedSpecularLandmark::LandmarkPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::FoggedSpecularLandmark::LandmarkPipelineSetup>>> _specularFoggedObject3DPipelineSetupPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _depthPassRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _object2DRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _object3DRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem>>> _objectRenderItemPool;
    struct shared_ptr<ggl::LandmarkFlat::LandmarkPipelineState> _2DPipelineStateWithoutBlending;
    struct shared_ptr<ggl::LandmarkFlat::LandmarkPipelineState> _2DPipelineStateWithBlending;
    struct shared_ptr<ggl::LandmarkDepth::BuildingPipelineState> _depthPassPipelineState;
    struct shared_ptr<ggl::SpecularLandmark::LandmarkPipelineState> _specular3DPipelineStateWithoutBlending;
    struct shared_ptr<ggl::FoggedSpecularLandmark::LandmarkPipelineState> _specular3DFoggedPipelineStateWithoutBlending;
    struct shared_ptr<ggl::SpecularLandmark::LandmarkPipelineState> _specular3DPipelineStateWithBlending;
    struct shared_ptr<ggl::FoggedSpecularLandmark::LandmarkPipelineState> _specular3DFoggedPipelineStateWithBlending;
    struct shared_ptr<ggl::DiffuseLandmark::BuildingPipelineState> _diffuse3DPipelineStateWithoutBlending;
    struct shared_ptr<ggl::FoggedDiffuseLandmark::LandmarkPipelineState> _diffuse3DFoggedPipelineStateWithoutBlending;
    struct shared_ptr<ggl::DiffuseLandmark::BuildingPipelineState> _diffuse3DPipelineStateWithBlending;
    struct shared_ptr<ggl::FoggedDiffuseLandmark::LandmarkPipelineState> _diffuse3DFoggedPipelineStateWithBlending;
    _Bool _supportsPerFragmentLighting;
    _Bool _fogEnabled;
    VKBuildingFootprintMapModel *_buildingMapModel;
}

@property(nonatomic, getter=isFogEnabled) _Bool fogEnabled; // @synthesize fogEnabled=_fogEnabled;
@property(nonatomic) VKBuildingFootprintMapModel *buildingMapModel; // @synthesize buildingMapModel=_buildingMapModel;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)generateDiffuseRenderItemsForGroup:(const shared_ptr_9d00bcb9 *)arg1 viewConstantData:(const shared_ptr_696716c4 *)arg2 fogConstantData:(const shared_ptr_c062e934 *)arg3 context:(struct LayoutContext *)arg4 commandBuffer:(struct CommandBuffer *)arg5 cameraPosition:(const Matrix_811b2232 *)arg6 alpha:(float)arg7 scale:(float)arg8 zoomLevel:(float)arg9;
- (void)generateSpecularRenderItemsForGroup:(const shared_ptr_9d00bcb9 *)arg1 viewConstantData:(const shared_ptr_696716c4 *)arg2 fogConstantData:(const shared_ptr_c062e934 *)arg3 context:(struct LayoutContext *)arg4 commandBuffer:(struct CommandBuffer *)arg5 cameraPosition:(const Matrix_811b2232 *)arg6 alpha:(float)arg7 scale:(float)arg8 zoomLevel:(float)arg9;
- (void)layoutFor3DWithContext:(struct LayoutContext *)arg1 commandBuffer:(struct CommandBuffer *)arg2 tiles:(id)arg3;
- (void)layoutFor2DWithContext:(struct LayoutContext *)arg1 commandBuffer:(struct CommandBuffer *)arg2 tiles:(id)arg3;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)resetPools;
- (void)flushPools;
- (id)initWithBuildingMapModel:(id)arg1 target:(id)arg2 sharedResources:(id)arg3;

@end


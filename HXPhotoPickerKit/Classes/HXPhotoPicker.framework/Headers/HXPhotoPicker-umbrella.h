#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "NSArray+HXExtension.h"
#import "NSBundle+HXPhotoPicker.h"
#import "NSDate+HXExtension.h"
#import "NSString+HXExtension.h"
#import "NSTimer+HXExtension.h"
#import "PHAsset+HXExtension.h"
#import "UIButton+HXExtension.h"
#import "UIColor+HXExtension.h"
#import "UIFont+HXExtension.h"
#import "UIImage+HXExtension.h"
#import "UIImageView+HXExtension.h"
#import "UILabel+HXExtension.h"
#import "UIView+HXExtension.h"
#import "UIViewController+HXExtension.h"
#import "HXAlbumListViewController.h"
#import "HXCustomCameraController.h"
#import "HXCustomCameraViewController.h"
#import "HXCustomNavigationController.h"
#import "HXPhoto3DTouchViewController.h"
#import "HXPhotoEditViewController.h"
#import "HXPhotoPreviewViewController.h"
#import "HXPhotoViewController.h"
#import "HXVideoEditViewController.h"
#import "HXAssetManager.h"
#import "HXPhotoCommon.h"
#import "HXPhotoConfiguration.h"
#import "HXPhotoDefine.h"
#import "HX_PhotoEditViewController.h"
#import "HXPhotoEdit.h"
#import "HXPhotoEditConfiguration.h"
#import "HXMECancelBlock.h"
#import "HXPhotoEditChartletModel.h"
#import "HXPhotoEditGraffitiColorModel.h"
#import "HXPhotoClippingView.h"
#import "HXPhotoEditChartletContentViewCell.h"
#import "HXPhotoEditChartletListView.h"
#import "HXPhotoEditChartletPreviewView.h"
#import "HXPhotoEditClippingToolBar.h"
#import "HXPhotoEditDrawView.h"
#import "HXPhotoEditGraffitiColorSizeView.h"
#import "HXPhotoEditGraffitiColorView.h"
#import "HXPhotoEditGraffitiColorViewCell.h"
#import "HXPhotoEditGridLayer.h"
#import "HXPhotoEditGridMaskLayer.h"
#import "HXPhotoEditGridView.h"
#import "HXPhotoEditImageView.h"
#import "HXPhotoEditingView.h"
#import "HXPhotoEditMosaicView.h"
#import "HXPhotoEditResizeControl.h"
#import "HXPhotoEditSplashMaskLayer.h"
#import "HXPhotoEditSplashView.h"
#import "HXPhotoEditStickerItem.h"
#import "HXPhotoEditStickerItemContentView.h"
#import "HXPhotoEditStickerItemView.h"
#import "HXPhotoEditStickerTrashView.h"
#import "HXPhotoEditStickerView.h"
#import "HXPhotoEditTextView.h"
#import "HX_PhotoEditBottomView.h"
#import "HXPhotoManager.h"
#import "HXPhotoPicker.h"
#import "HXPhotoTools.h"
#import "HXPhotoTypes.h"
#import "HXAlbumModel.h"
#import "HXCustomAssetModel.h"
#import "HXPhotoModel.h"
#import "HXPhotoViewCellCustomProtocol.h"
#import "HXPhotoViewProtocol.h"
#import "HXPickerResult.h"
#import "HXPhotoEditTransition.h"
#import "HXPhotoInteractiveTransition.h"
#import "HXPhotoPersentInteractiveTransition.h"
#import "HXPhotoViewPresentTransition.h"
#import "HXPhotoViewTransition.h"
#import "HXAlbumlistView.h"
#import "HXCameraBottomView.h"
#import "HXCircleProgressView.h"
#import "HXCollectionView.h"
#import "HXCustomCollectionReusableView.h"
#import "HXCustomPreviewView.h"
#import "HXFullScreenCameraPlayView.h"
#import "HXPhotoBottomSelectView.h"
#import "HXPhotoCustomNavigationBar.h"
#import "HXPhotoLimitView.h"
#import "HXPhotoPreviewBottomView.h"
#import "HXPhotoPreviewImageViewCell.h"
#import "HXPhotoPreviewLivePhotoCell.h"
#import "HXPhotoPreviewVideoViewCell.h"
#import "HXPhotoPreviewViewCell.h"
#import "HXPhotoSubViewCell.h"
#import "HXPhotoView.h"
#import "HXPhotoViewFlowLayout.h"
#import "HXPreviewContentView.h"
#import "HXPreviewImageView.h"
#import "HXPreviewLivePhotoView.h"
#import "HXPreviewVideoView.h"
#import "NSArray+HXExtension.h"
#import "NSBundle+HXPhotoPicker.h"
#import "NSDate+HXExtension.h"
#import "NSString+HXExtension.h"
#import "NSTimer+HXExtension.h"
#import "PHAsset+HXExtension.h"
#import "UIButton+HXExtension.h"
#import "UIColor+HXExtension.h"
#import "UIFont+HXExtension.h"
#import "UIImage+HXExtension.h"
#import "UIImageView+HXExtension.h"
#import "UILabel+HXExtension.h"
#import "UIView+HXExtension.h"
#import "UIViewController+HXExtension.h"
#import "HXAlbumListViewController.h"
#import "HXCustomCameraController.h"
#import "HXCustomCameraViewController.h"
#import "HXCustomNavigationController.h"
#import "HXPhoto3DTouchViewController.h"
#import "HXPhotoEditViewController.h"
#import "HXPhotoPreviewViewController.h"
#import "HXPhotoViewController.h"
#import "HXVideoEditViewController.h"
#import "HXAssetManager.h"
#import "HXPhotoCommon.h"
#import "HXPhotoConfiguration.h"
#import "HXPhotoDefine.h"
#import "HX_PhotoEditViewController.h"
#import "HXPhotoEdit.h"
#import "HXPhotoEditConfiguration.h"
#import "HXMECancelBlock.h"
#import "HXPhotoEditChartletModel.h"
#import "HXPhotoEditGraffitiColorModel.h"
#import "HXPhotoClippingView.h"
#import "HXPhotoEditChartletContentViewCell.h"
#import "HXPhotoEditChartletListView.h"
#import "HXPhotoEditChartletPreviewView.h"
#import "HXPhotoEditClippingToolBar.h"
#import "HXPhotoEditDrawView.h"
#import "HXPhotoEditGraffitiColorSizeView.h"
#import "HXPhotoEditGraffitiColorView.h"
#import "HXPhotoEditGraffitiColorViewCell.h"
#import "HXPhotoEditGridLayer.h"
#import "HXPhotoEditGridMaskLayer.h"
#import "HXPhotoEditGridView.h"
#import "HXPhotoEditImageView.h"
#import "HXPhotoEditingView.h"
#import "HXPhotoEditMosaicView.h"
#import "HXPhotoEditResizeControl.h"
#import "HXPhotoEditSplashMaskLayer.h"
#import "HXPhotoEditSplashView.h"
#import "HXPhotoEditStickerItem.h"
#import "HXPhotoEditStickerItemContentView.h"
#import "HXPhotoEditStickerItemView.h"
#import "HXPhotoEditStickerTrashView.h"
#import "HXPhotoEditStickerView.h"
#import "HXPhotoEditTextView.h"
#import "HX_PhotoEditBottomView.h"
#import "HXPhotoManager.h"
#import "HXPhotoPicker.h"
#import "HXPhotoTools.h"
#import "HXPhotoTypes.h"
#import "HXAlbumModel.h"
#import "HXCustomAssetModel.h"
#import "HXPhotoModel.h"
#import "HXPhotoViewCellCustomProtocol.h"
#import "HXPhotoViewProtocol.h"
#import "HXPickerResult.h"
#import "HXPhotoEditTransition.h"
#import "HXPhotoInteractiveTransition.h"
#import "HXPhotoPersentInteractiveTransition.h"
#import "HXPhotoViewPresentTransition.h"
#import "HXPhotoViewTransition.h"
#import "HXAlbumlistView.h"
#import "HXCameraBottomView.h"
#import "HXCircleProgressView.h"
#import "HXCollectionView.h"
#import "HXCustomCollectionReusableView.h"
#import "HXCustomPreviewView.h"
#import "HXFullScreenCameraPlayView.h"
#import "HXPhotoBottomSelectView.h"
#import "HXPhotoCustomNavigationBar.h"
#import "HXPhotoLimitView.h"
#import "HXPhotoPreviewBottomView.h"
#import "HXPhotoPreviewImageViewCell.h"
#import "HXPhotoPreviewLivePhotoCell.h"
#import "HXPhotoPreviewVideoViewCell.h"
#import "HXPhotoPreviewViewCell.h"
#import "HXPhotoSubViewCell.h"
#import "HXPhotoView.h"
#import "HXPhotoViewFlowLayout.h"
#import "HXPreviewContentView.h"
#import "HXPreviewImageView.h"
#import "HXPreviewLivePhotoView.h"
#import "HXPreviewVideoView.h"
#import "NSArray+HXExtension.h"
#import "NSBundle+HXPhotoPicker.h"
#import "NSDate+HXExtension.h"
#import "NSString+HXExtension.h"
#import "NSTimer+HXExtension.h"
#import "PHAsset+HXExtension.h"
#import "UIButton+HXExtension.h"
#import "UIColor+HXExtension.h"
#import "UIFont+HXExtension.h"
#import "UIImage+HXExtension.h"
#import "UIImageView+HXExtension.h"
#import "UILabel+HXExtension.h"
#import "UIView+HXExtension.h"
#import "UIViewController+HXExtension.h"
#import "HXAlbumListViewController.h"
#import "HXCustomCameraController.h"
#import "HXCustomCameraViewController.h"
#import "HXCustomNavigationController.h"
#import "HXPhoto3DTouchViewController.h"
#import "HXPhotoEditViewController.h"
#import "HXPhotoPreviewViewController.h"
#import "HXPhotoViewController.h"
#import "HXVideoEditViewController.h"
#import "HXAssetManager.h"
#import "HXPhotoCommon.h"
#import "HXPhotoConfiguration.h"
#import "HXPhotoDefine.h"
#import "HX_PhotoEditViewController.h"
#import "HXPhotoEdit.h"
#import "HXPhotoEditConfiguration.h"
#import "HXMECancelBlock.h"
#import "HXPhotoEditChartletModel.h"
#import "HXPhotoEditGraffitiColorModel.h"
#import "HXPhotoClippingView.h"
#import "HXPhotoEditChartletContentViewCell.h"
#import "HXPhotoEditChartletListView.h"
#import "HXPhotoEditChartletPreviewView.h"
#import "HXPhotoEditClippingToolBar.h"
#import "HXPhotoEditDrawView.h"
#import "HXPhotoEditGraffitiColorSizeView.h"
#import "HXPhotoEditGraffitiColorView.h"
#import "HXPhotoEditGraffitiColorViewCell.h"
#import "HXPhotoEditGridLayer.h"
#import "HXPhotoEditGridMaskLayer.h"
#import "HXPhotoEditGridView.h"
#import "HXPhotoEditImageView.h"
#import "HXPhotoEditingView.h"
#import "HXPhotoEditMosaicView.h"
#import "HXPhotoEditResizeControl.h"
#import "HXPhotoEditSplashMaskLayer.h"
#import "HXPhotoEditSplashView.h"
#import "HXPhotoEditStickerItem.h"
#import "HXPhotoEditStickerItemContentView.h"
#import "HXPhotoEditStickerItemView.h"
#import "HXPhotoEditStickerTrashView.h"
#import "HXPhotoEditStickerView.h"
#import "HXPhotoEditTextView.h"
#import "HX_PhotoEditBottomView.h"
#import "HXPhotoManager.h"
#import "HXPhotoPicker.h"
#import "HXPhotoTools.h"
#import "HXPhotoTypes.h"
#import "HXAlbumModel.h"
#import "HXCustomAssetModel.h"
#import "HXPhotoModel.h"
#import "HXPhotoViewCellCustomProtocol.h"
#import "HXPhotoViewProtocol.h"
#import "HXPickerResult.h"
#import "HXPhotoEditTransition.h"
#import "HXPhotoInteractiveTransition.h"
#import "HXPhotoPersentInteractiveTransition.h"
#import "HXPhotoViewPresentTransition.h"
#import "HXPhotoViewTransition.h"
#import "HXAlbumlistView.h"
#import "HXCameraBottomView.h"
#import "HXCircleProgressView.h"
#import "HXCollectionView.h"
#import "HXCustomCollectionReusableView.h"
#import "HXCustomPreviewView.h"
#import "HXFullScreenCameraPlayView.h"
#import "HXPhotoBottomSelectView.h"
#import "HXPhotoCustomNavigationBar.h"
#import "HXPhotoLimitView.h"
#import "HXPhotoPreviewBottomView.h"
#import "HXPhotoPreviewImageViewCell.h"
#import "HXPhotoPreviewLivePhotoCell.h"
#import "HXPhotoPreviewVideoViewCell.h"
#import "HXPhotoPreviewViewCell.h"
#import "HXPhotoSubViewCell.h"
#import "HXPhotoView.h"
#import "HXPhotoViewFlowLayout.h"
#import "HXPreviewContentView.h"
#import "HXPreviewImageView.h"
#import "HXPreviewLivePhotoView.h"
#import "HXPreviewVideoView.h"

FOUNDATION_EXPORT double HXPhotoPickerVersionNumber;
FOUNDATION_EXPORT const unsigned char HXPhotoPickerVersionString[];


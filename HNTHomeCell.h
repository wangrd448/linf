//
//  HNTHomeCell.h
//  demo
//
//  Created by 东哥 on 2022/4/19.
//

#import <UIKit/UIKit.h>

#import "HNHotspotInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HNTHomeCell : UITableViewCell

@property (nonatomic ,assign)NSInteger amount;

@property (nonatomic ,strong)HNHotspotInfoModel *hotspotModel;


@end

NS_ASSUME_NONNULL_END

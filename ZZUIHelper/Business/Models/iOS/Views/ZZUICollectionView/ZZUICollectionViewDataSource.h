//
//  ZZUICollectionViewDataSource.h
//  ZZUIHelper
//
//  Created by 李伯坤 on 2017/2/20.
//  Copyright © 2017年 李伯坤. All rights reserved.
//

#import "ZZProtocol.h"

@interface ZZUICollectionViewDataSource : ZZProtocol

- (NSString *)numberOfSectionsInCollectionView;
- (NSString *)collectionViewnumberOfItemsInSection;
- (NSString *)collectionViewcellForItemAtIndexPath;
- (NSString *)collectionViewviewForSupplementaryElementOfKindatIndexPath;
- (NSString *)collectionViewcanMoveItemAtIndexPath;
- (NSString *)collectionViewmoveItemAtIndexPathtoIndexPath;

@end